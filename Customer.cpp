#include "Customer.h"

Customer::Customer(const std::string &name, const std::string &contactInfo, const std::string &meterNumber)
    : name(name), contactInfo(contactInfo), meterNumber(meterNumber) {}

const std::string &Customer::getName() const {
    return name;
}

const std::string &Customer::getContactInfo() const {
    return contactInfo;
}

const std::string &Customer::getMeterNumber() const {
    return meterNumber;
}
