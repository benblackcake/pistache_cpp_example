#include "../services/customer_service.hpp"
#include "../controllers/customer_controller.hpp"

using namespace Http;

void CustomerController::getCustomer(const Rest::Request& request, Http::ResponseWriter response){
    CustomerService custService;
    int i;
    auto jsonObjects = json::array();
    
    for(i=0; i <5; i++){
       custService.addCustomer("Customer "+to_string(i), "Address "+to_string(i));

         jsonObjects.push_back(custService.getCustomer());
    } 
      response.headers().add<Header::ContentType>(MIME(Application, Json));
      response.send(Http::Code::Ok, jsonObjects.dump());
}

//If using namespace
// void CustomerNamespace::getCustomer(const Rest::Request& request, Http::ResponseWriter response) {
//     CustomerService custService;
//     int i;
//     auto jsonObjects = json::array();
    
//     for(i=0; i <5; i++){
//        custService.addCustomer("Customer "+to_string(i), "Address "+to_string(i));

//          jsonObjects.push_back(custService.getCustomer());
//     } 
//       response.headers().add<Header::ContentType>(MIME(Application, Json));
//       response.send(Http::Code::Ok, jsonObjects.dump());
// }