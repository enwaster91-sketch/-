#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Структура для точки на площині
struct Point {
    double x;
    double y;
};

// Структура для прямокутника, що складається з двох точок
struct Rectangle {
    Point bottomLeft;
    Point topRight;
};

int main() {
    Rectangle rect;

    // Введення координат
    cout << "Bottom-left - x: ";
    cin >> rect.bottomLeft.x;
    cout << "Bottom-left - y: ";
    cin >> rect.bottomLeft.y;
    
    cout << "Top-right - x: ";
    cin >> rect.topRight.x;
    cout << "Top-right - y: ";
    cin >> rect.topRight.y;

    // Обчислення сторін прямокутника
    double width = rect.topRight.x - rect.bottomLeft.x;
    double height = rect.topRight.y - rect.bottomLeft.y;

    // Площа — це добуток ширини на висоту
    double area = abs(width * height);

    // Виведення результату з двома знаками після коми
    cout << fixed << setprecision(2);
    cout << "\nArea: " << area << endl;

    return 0;
}