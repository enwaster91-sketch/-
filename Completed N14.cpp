#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

struct Product {
    std::string name;
    double price;
    int quantity;
};

int main() {
    const int count = 3;
    std::vector<Product> products(count);
    double totalWarehouseValue = 0;

    for (int i = 0; i < count; ++i) {
        std::cout << "Product " << i + 1 << " - name: ";
        std::cin >> products[i].name;
        std::cout << "Product " << i + 1 << " - price: ";
        std::cin >> products[i].price;
        std::cout << "Product " << i + 1 << " - quantity: ";
        std::cin >> products[i].quantity;
        
        totalWarehouseValue += products[i].price * products[i].quantity;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nTotal warehouse value: " << totalWarehouseValue << " UAH" << std::endl;

    return 0;
}