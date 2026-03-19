#include <iostream>

struct Complex {
    double real;
    double imag;
};

int main() {
    Complex c1, c2, sum;

    // Ввід першого числа
    std::cout << "Complex 1 - real: ";
    std::cin >> c1.real;
    std::cout << "Complex 1 - imag: ";
    std::cin >> c1.imag;

    // Ввід другого числа
    std::cout << "Complex 2 - real: ";
    std::cin >> c2.real;
    std::cout << "Complex 2 - imag: ";
    std::cin >> c2.imag;

    // Додавання
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    // Форматований вивід
    std::cout << "Sum: " << sum.real;
    if (sum.imag >= 0) 
        std::cout << " + " << sum.imag << "i" << std::endl;
    else 
        std::cout << " - " << -sum.imag << "i" << std::endl;

    return 0;
}