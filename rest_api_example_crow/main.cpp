#include <crow.h>
#include <pqxx/pqxx>
#include "includes/routes.hpp"
#include "includes/db_books.hpp"


int main() {
    pqxx::connection *connection = connect();

    crow::SimpleApp app;
    home(app);
    app
      .port(18080)
      .multithreaded()
      .run();

    disconnect(connection);

    return 0;
}

