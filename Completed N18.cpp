/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>

int main() {
    Order order;

    std::cout << "Product name: ";
    std::getline(std::cin, order.product.name);
    
    std::cout << "Product price: ";
    std::cin >> order.product.price;
    
    std::cout << "Order quantity: ";
    std::cin >> order.quantity;

    double total = order.product.price * order.quantity;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Order total: " << total << " UAH" << std::endl;

    return 0;
}