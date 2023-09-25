#ifndef ELECTRICITY_BILL_H
#define ELECTRICITY_BILL_H

#include "Customer.h"

class ElectricityBill {
private:
    Customer customer;
    std::string billDate;
    double consumption;
    double ratePerUnit;

public:
    ElectricityBill(const Customer &customer, double consumption, double ratePerUnit);
    const Customer &getCustomer() const;
    double getConsumption() const;
    double getRatePerUnit() const;
    double getTotalAmount() const;
    std::string getBillDate() const;
};

#endif // ELECTRICITY_BILL_H
