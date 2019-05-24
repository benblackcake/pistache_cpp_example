#ifndef CUSTOMER_SERVICE_H
#define CUSTOMER_SERVICE_H
#include "../models/customer.hpp"

class CustomerService{
    Customer customer;
    public:
        // Constructors
        // Default constructor
        CustomerService();

        // Constructor which passes customer's name and addrss
        CustomerService(string name, string address);

        // Add customer method
        void addCustomer(string name, string address);

        // Get customer method
        json getCustomer();
};
#endif
