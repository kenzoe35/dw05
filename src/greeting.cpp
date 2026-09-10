#include "greeting.h"   // This should always be first, do not move this

#include <iostream>

std::string retrieve_name() {
    std::string name{};

    std::cout << "Enter your name: ";

    std::cin >> name;

    return name;
}

void greeting(const std::string name) {
    std::cout << "Welcome, " << name << std::endl;
}
