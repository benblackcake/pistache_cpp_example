#include "./routes/routes.hpp"

int main() {
  RoutesManager app({Ipv4::any(), 9000});
  app.serve();
}