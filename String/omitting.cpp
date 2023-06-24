#include <iostream>
#include <string.h>

int main() {
    std::cout << "Hello boii" << std::endl;

    std::string myName;

    std::getline(std::cin, myName);

    std::cout << myName << std::endl;

    return 0;
}