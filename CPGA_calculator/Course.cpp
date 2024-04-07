#include "Course.hpp"

Course::Course(std::string course_name, int grade, int credits) 
: course_name(course_name), grade(grade), credits(credits) {
    std::cout << "Course Paramatized Constructor" << std::endl;
}
std::string Course::getName() const {
    // std::cout << "Name: " << course_name << std::endl;
    return course_name; 
}
int Course::getCredits() const {
    // std::cout << "Credits: " << credits << std::endl; 
    return credits; 
}
double Course::getGrade() const { 
    // std::cout << "Grade: " << grade << std::endl;
    return grade; 
}