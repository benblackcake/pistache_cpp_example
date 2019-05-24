#include "./customer_service.hpp"

CustomerService::CustomerService(){}

CustomerService::CustomerService(string name, string address){
    customer.setName(name);
    customer.setAddress(address);
}

void CustomerService::addCustomer(string name, string address){
    customer.setName(name);
    customer.setAddress(address);
}

json CustomerService::getCustomer(){
    return this->customer.jsonSerialize();
}

