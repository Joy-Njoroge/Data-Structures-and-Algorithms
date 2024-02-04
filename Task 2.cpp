#include <iostream>
#include <string>

struct Course {
    std::string course_code;
    std::string course_name;
};

struct Grade {
    int mark;
    char the_grade;
};

struct Student {
    std::string registration_number;
    std::string name;
    int age;
    Course course;
    Grade grades;
};

void addStudent(Student students[], int& studentCount) {
    if (studentCount < 40) {
        Student newStudent;
        std::cout << "Enter registration number: ";
        std::cin >> newStudent.registration_number;
        std::cout << "Enter name: ";
        std::cin >> newStudent.name;
        std::cout << "Enter age: ";
        std::cin >> newStudent.age;
        std::cout << "Enter course code: ";
        std::cin >> newStudent.course.course_code;
        std::cout << "Enter course name: ";
        std::cin >> newStudent.course.course_name;
        // Assume grades will be added later
        students[studentCount] = newStudent;
        studentCount++;
    } else {
        std::cout << "Maximum number of students reached." << std::endl;
    }
}

void editStudentDetails(Student& student) {
    std::cout << "Enter new registration number: ";
    std::cin >> student.registration_number;
    std::cout << "Enter new name: ";
    std::cin >> student.name;
    std::cout << "Enter new age: ";
    std::cin >> student.age;
}

void addMarksAndCalculateGrades(Student& student) {
    std::cout << "Enter mark: ";
    std::cin >> student.grades.mark;

    if (student.grades.mark > 69)
        student.grades.the_grade = 'A';
    else if (student.grades.mark > 59)
        student.grades.the_grade = 'B';
    else if (student.grades.mark > 49)
        student.grades.the_grade = 'C';
    else if (student.grades.mark > 39)
        student.grades.the_grade = 'D';
    else
        student.grades.the_grade = 'E';
}

int main() {
    Student students[40];
    int studentCount = 0;

    // Example usage:
    addStudent(students, studentCount);
    editStudentDetails(students[0]);
    addMarksAndCalculateGrades(students[0]);

    return 0;
}
#include <iostream>
#include <string>

class Course {
public:
    std::string course_code;
    std::string course_name;
};

class Grade {
public:
    int mark;
    char the_grade;
};

class Student {
public:
    std::string registration_number;
    std::string name;
    int age;
    Course course;
    Grade grades;

    void editDetails() {
        std::cout << "Enter new registration number: ";
        std::cin >> registration_number;
        std::cout << "Enter new name: ";
        std::cin >> name;
        std::cout << "Enter new age: ";
        std::cin >> age;
    }

    void addMarksAndCalculateGrades() {
        std::cout << "Enter mark: ";
        std::cin >> grades.mark;

        if (grades.mark > 69)
            grades.the_grade = 'A';
        else if (grades.mark > 59)
            grades.the_grade = 'B';
        else if (grades.mark > 49)
            grades.the_grade = 'C';
        else if (grades.mark > 39)
            grades.the_grade = 'D';
        else
            grades.the_grade = 'E';
    }
};

int main() {
    Student students[40];
    int studentCount = 0;

    // Example usage:
    students[studentCount].editDetails();
    students[studentCount].addMarksAndCalculateGrades();

    return 0;
}
