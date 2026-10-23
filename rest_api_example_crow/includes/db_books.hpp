#include <pqxx/pqxx>

#define POSTGRESQL_CONNECTION_CONFIG "postgresql://books:books@localhost:5432/books"

pqxx::connection *connect();
void disconnect(pqxx::connection *connection);