#include "ElectricityBill.h"
#include <ctime>

ElectricityBill::ElectricityBill(const Customer &customer, double consumption, double ratePerUnit)
    : customer(customer), consumption(consumption), ratePerUnit(ratePerUnit) {
    time_t now = time(nullptr);
    billDate = ctime(&now);
}

const Customer &ElectricityBill::getCustomer() const {
    return customer;
}

double ElectricityBill::getConsumption() const {
    return consumption;
}

double ElectricityBill::getRatePerUnit() const {
    return ratePerUnit;
}

double ElectricityBill::getTotalAmount() const {
    return consumption * ratePerUnit;
}

std::string ElectricityBill::getBillDate() const {
    return billDate;
}
