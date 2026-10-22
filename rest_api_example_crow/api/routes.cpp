#include "includes/routes.hpp"

void home(crow::SimpleApp& simple_app) {
    CROW_ROUTE(simple_app, "/")([](){
        crow::json::wvalue x({{"message", "Hello World!"}});

        return x;
    });
}