#ifndef ELECTRICITY_BILLING_SYSTEM_H
#define ELECTRICITY_BILLING_SYSTEM_H

#include "ElectricityBill.h"

class ElectricityBillingSystem {
private:
    double ratePerUnit;

public:
    ElectricityBillingSystem(double ratePerUnit);
    void generateBill(const Customer &customer, double consumption);
    void saveBillToFile(const ElectricityBill &bill);
};

#endif // ELECTRICITY_BILLING_SYSTEM_H
