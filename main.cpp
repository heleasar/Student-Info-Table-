#include <iostream>
#include <vector>
#include <iomanip>

struct Student {
    std::string name;
    std::string major;
    std::vector<std::string> classes;
    std::string degreePlan;
};

void displayTable(const std::vector<Student>& students) {
    std::cout << std::setw(20) << std::left << "Name"
              << std::setw(20) << std::left << "Major"
              << std::setw(30) << std::left << "Classes"
              << "Degree Plan" << std::endl;
    std::cout << "----------------------------------------------------------------" << std::endl;

    for (const auto& student : students) {
        std::cout << std::setw(20) << std::left << student.name
                  << std::setw(20) << std::left << student.major;

        std::cout << std::setw(30) << std::left;
        for (const auto& className : student.classes) {
            std::cout << className << " ";
        }

        std::cout << student.degreePlan << std::endl;
    }
}

int main() {
    std::vector<Student> students;

    // Add some sample student information
    Student student1{"John Doe", "Computer Science", {"C++ Programming", "Data Structures"}, "Bachelor of Science"};
    Student student2{"Jane Smith", "Mathematics", {"Calculus", "Linear Algebra", "Discrete Mathematics"}, "Bachelor of Arts"};

    students.push_back(student1);
    students.push_back(student2);

    // Display the table
    displayTable(students);

    return 0;
}
