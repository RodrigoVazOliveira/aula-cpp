#include "../includes/db_books.hpp"
#include <pqxx/pqxx>
#include <iostream>

pqxx::connection *connect()
{
  std::cout << " Criando conexao com banco de dados\n";
  try
  {
    pqxx::connection *connection = new pqxx::connection(POSTGRESQL_CONNECTION_CONFIG);

    return connection;
  }
  catch (std::exception const &e)
  {
    std::cerr << "Ocorreu um problema: " << e.what() << "\n";

    throw e;
  }
}

void disconnect(pqxx::connection *connection)
{
  std::cout << " Desconectando do banco de dados\n";
  try
  {
    connection->close();
    delete connection;
    std::cout << "Conexao com banco de dados fechada\n";
  }
  catch (std::exception const &e)
  {
    std::cerr << "Ocorreu um problema: " << e.what() << "\n";

    throw e;
  }
}
