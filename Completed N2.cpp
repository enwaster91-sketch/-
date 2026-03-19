/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>

struct Product {
    std::string name;
    double price;
    int quantity;
};

int main() {
    Product prod;
    
    std::cout << "Enter name:" << std::endl;
    std::getline(std::cin, prod.name);
    
    std::cout << "Enter price:" << std::endl;
    std::cin >> prod.price;
    
    std::cout << "Enter quantity:" << std::endl;
    std::cin >> prod.quantity;
    
    double total = prod.price * prod.quantity;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total: " << total << " UAH." << std::endl;
    
    return 0;
}