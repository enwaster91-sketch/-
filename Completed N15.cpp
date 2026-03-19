#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Визначаємо структуру для товару
struct Product {
    string name;
    double price;
};

int main() {
    const int count = 3;
    Product products[count];

    // Зчитуємо дані про 3 товари
    for (int i = 0; i < count; i++) {
        // У прикладі вводиться назва, потім ціна
        cin >> products[i].name;
        cin >> products[i].price;
    }

    // Алгоритм пошуку найменшого значення
    int cheapestIndex = 0;
    for (int i = 1; i < count; i++) {
        if (products[i].price < products[cheapestIndex].price) {
            cheapestIndex = i;
        }
    }

    // Виведення результату за форматом
    cout << "Cheapest: " << products[cheapestIndex].name 
         << " (" << products[cheapestIndex].price << " UAH)" << endl;

    return 0;
}