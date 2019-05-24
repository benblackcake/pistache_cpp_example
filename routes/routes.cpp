#include "./routes.hpp"

RoutesManager::RoutesManager(Address addr): Http::Endpoint(addr) {   
    Routes::Get(RoutesManager::router, "/customers", Routes::bind(&CustomerController::getCustomer));
    // ifusing namespace
    // Routes::Get(RoutesManager::router, "/customers", Routes::bind(&CustomerNamespace::getCustomer));
     setHandler(router.handler());
}