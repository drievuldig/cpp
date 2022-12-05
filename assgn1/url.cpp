// url.cpp
// Url class implementation
#include <iostream>
#include "url.h"
// constructor
Url::Url(std::string& protocol, std::string& resource) : protocol(protocol), resource(resource) {};
// display
void Url::display() {
    std::cout << protocol << "://" << resource << "\n";
}
