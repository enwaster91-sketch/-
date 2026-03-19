#include <iostream>
#include <string>

struct Student {
    std::string name;
    int grade;
};

int main() {
    Student students[3];
    for (int i = 0; i < 3; ++i) {
        std::cout << "Student " << i + 1 << " - name: ";
        std::cin >> students[i].name;
        std::cout << "Student " << i + 1 << " - grade: ";
        std::cin >> students[i].grade;
    }

    // Алгоритм пошуку максимуму
    int bestIndex = 0;
    for (int i = 1; i < 3; ++i) {
        if (students[i].grade > students[bestIndex].grade) {
            bestIndex = i;
        }
    }

    std::cout << "\nBest student: " << students[bestIndex].name 
              << " (" << students[bestIndex].grade << ")" << std::endl;
    return 0;
}