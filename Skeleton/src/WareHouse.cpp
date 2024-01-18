#include "WareHouse.h"
// File: WareHouse.h
// Other necessary includes
WareHouse::WareHouse(const std::string &configFilePath) {
    isOpen = false;
    customerCounter = 1;
    volunteerCounter = 1;
    // Add additional constructor logic here
}

void WareHouse::start() {
    isOpen = true;
    // Add additional logic if needed
}

void WareHouse::addOrder(Order* order) {
    pendingOrders.push_back(order);
    // Add additional logic if needed
}

// Implement other member functions as needed
    
    

const std::vector<BaseAction*> &WareHouse::getActions() const {
    // Implement logic to return the actions log
    return actionsLog;
}

void WareHouse::close() {
    isOpen = false;
    // Add additional logic if needed
}

void WareHouse::open() {
    isOpen = true;
    // Add additional logic if needed
}