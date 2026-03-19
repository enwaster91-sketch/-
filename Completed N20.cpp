#include <iostream>
#include <string>
#include <iomanip> // Для форматованого виводу (наприклад, 09:05)

using namespace std;

// Структура для дати
struct Date {
    int day;
    int month;
    int year;
};

// Структура для часу
struct Time {
    int hours;
    int minutes;
};

// Структура для події, що містить назву та вкладені структури
struct Event {
    string name;
    Date date;
    Time time;
};

int main() {
    Event ev;

    // Зчитуємо дані (згідно з прикладом)
    // Якщо назва події з одного слова, можна через cin >> ev.name
    getline(cin, ev.name); 
    cin >> ev.date.day >> ev.date.month >> ev.date.year;
    cin >> ev.time.hours >> ev.time.minutes;

    // Вивід інформації у потрібному форматі
    cout << "Event: " << ev.name << endl;
    
    // setfill('0') та setw(2) додають нуль попереду, якщо число менше 10
    cout << "When: " << setfill('0') << setw(2) << ev.date.day << "." 
         << setw(2) << ev.date.month << "." << ev.date.year 
         << " at " << setw(2) << ev.time.hours << ":" << setw(2) << ev.time.minutes << endl;

    return 0;
}