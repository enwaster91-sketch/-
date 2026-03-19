#include <iostream>

// Оголошення структури Time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t;

    // Введення даних
    std::cout << "Enter hours: ";
    std::cin >> t.hours;
    std::cout << "Enter minutes: ";
    std::cin >> t.minutes;
    std::cout << "Enter seconds: ";
    std::cin >> t.seconds;

    // Обчислення загальної кількості секунд
    long totalSeconds = (t.hours * 3600) + (t.minutes * 60) + t.seconds;

    // Виведення результату
    std::cout << "Total seconds: " << totalSeconds << std::endl;

    return 0;
}