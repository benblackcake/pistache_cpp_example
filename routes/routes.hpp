#ifndef ROUTES_H
#define ROUTES_H
#include <pistache/endpoint.h>
#include "../controllers/customer_controller.hpp"

using namespace Pistache;
using namespace Rest;

class RoutesManager: public Http::Endpoint {
   Rest::Router router;
   public:
        RoutesManager(Address addr);
        void getCustomer(const Rest::Request& req, Http::ResponseWriter res);
};
#endif