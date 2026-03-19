#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

struct Student {
    std::string name;
    int grade;
};

int main() {
    const int count = 3;
    std::vector<Student> students(count);
    double totalSum = 0;

    for (int i = 0; i < count; ++i) {
        std::cout << "Student " << i + 1 << " - name: ";
        std::cin >> students[i].name;
        std::cout << "Student " << i + 1 << " - grade: ";
        std::cin >> students[i].grade;
        totalSum += students[i].grade;
    }

    double average = totalSum / count;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nAverage grade: " << average << std::endl;

    return 0;
}