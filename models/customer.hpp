#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <nlohmann/json.hpp>
#include<string>

using namespace std;
using namespace nlohmann;

class Customer{
    string name;
    string address;

    public:
        //Constructors
        Customer();
        Customer(string name, string address);

        //Getters
        string getName();
        string getAddress();

        //Setters
        void setName(string name);
        void setAddress(string address);

        //Serialize
        json jsonSerialize();
};
#endif