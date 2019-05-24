#include "./customer.hpp"

Customer::Customer(){};

Customer::Customer(string name, string address){
    this->name = name;
    this->address = address;
}

string Customer::getName(){
    return this->name;
}

string Customer::getAddress(){
    return this->address;
}

void Customer::setName(string name){
    this->name = name;
}

void Customer::setAddress(string address){
    this->address = address;
}

json Customer::jsonSerialize(){
  json customer = {
        {"name", this->name},
        {"address", this->address}
    };
    return customer;
}