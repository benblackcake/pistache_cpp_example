#ifndef CUSTOMER_CONTROLLER_H
#define CUSTOMER_CONTROLLER_H
#include <pistache/router.h>
#include <pistache/http.h>
#include "../models/customer.hpp"

using namespace Pistache;
using namespace Rest;

//This getCustomer of CustomerNamespace will produce the same result as the getCustomer static method of the CustomerController below.
namespace CustomerNamespace { 
          void getCustomer(const Rest::Request& request, Http::ResponseWriter response);

}

class CustomerController{
     public:
        static void getCustomer(const Rest::Request& request, Http::ResponseWriter response);
};
#endif