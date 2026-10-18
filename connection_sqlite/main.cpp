#include <iostream>
#include <string>
#include <vector>
#include <sqlite3.h>
#include <zlib.h>

int main() {
    std::cout << "--- Iniciando o programa ----------\n";
    std::string text_original = "Esse é um texto muito longo que queremos comprimir para bibliteca zlib asdfasdfadsfdsfdsfdsfdsfsdfdsfsdfsdsadsfasdlfdfjowpiruqweriopqweurqiopewrqweuiopewrqwepoiureqwurqwpo";
    uLong size_font = text_original.size();
    uLong size_destination = compressBound(size_font);
    std::vector<unsigned char> data_compress(size_destination);
    int result_zlib = compress(
            data_compress.data(), 
            &size_destination,
            reinterpret_cast<const Bytef*>(text_original.data()),
            size_font
    );
    
    if (result_zlib != Z_OK) {
        std::cerr << "Ocorrreu uma falha ao comprimir os dados com zlib!!!\n";
        
        return 1;
    }
    std::cout << "[ZLIB]  texto original: " << size_font << " bytes\n";
    std::cout << "[ZLIB] texto comprimido: " << size_destination << " bytes\n"; 

    // sqlite3 conexao
    sqlite3* db;
    int result_sqlite = sqlite3_open("db_program.db", &db);
    if (result_sqlite != SQLITE_OK) {
        std::cerr << "Error: não foi possivel abrir o banco de dados\n";
        
        return 1;
    }
    
    const char* sql_create_table = "CREATE TABLE IF NOT EXISTS  files (id INTEGER PRIMARY KEY, dados BLOB);";
    sqlite3_exec(
            db,
            sql_create_table,
            nullptr,
            nullptr,
            nullptr
    );
    const char* sql_insert = "INSERT INTO files (dados) VALUES (?);";
    sqlite3_stmt* sql_stmt;
    sqlite3_prepare_v2(
            db,
            sql_insert,
            -1,
            &sql_stmt,
            nullptr
    );
    sqlite3_bind_blob(
            sql_stmt, 
            1, 
            data_compress.data(), 
            size_destination,
            SQLITE_STATIC
    );


    if (sqlite3_step(sql_stmt) != SQLITE_DONE) {
        std::cerr << "[SQLITE][Error] Ocorreu uma falha ao inserir dados no banco de dados\n";
    }

    sqlite3_finalize(sql_stmt);
    sqlite3_close(db);
    
    std::cout << "---------- Programa finalizou com sucesso -----\n";

    return 0;
}
