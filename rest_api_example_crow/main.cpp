#include <crow.h>
#include "includes/routes.hpp"

int main() {
    crow::SimpleApp app;
    home(app);
    app
      .port(18080)
      .multithreaded()
      .run();

    return 0;
}

