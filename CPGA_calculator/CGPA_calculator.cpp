#include "CGPA_calculator.hpp"

/**
 * Adds a course to the CGPA calculator.
 *
 * @param course the course to be added
 *
 * @return void
 *
 * @throws ErrorType description of error
 */
void CGPA_calculator::add_course(const Course& course){ 
    courses.push_back(course);
}
/**
 * Calculate the CGPA based on the courses' credits and grades.
 *
 * @return The calculated CGPA
 */
double CGPA_calculator::calculate_cgpa(){
    double totalCredits = 0;
    double totalGradePoints = 0;
    for(const Course& course : courses){
        totalCredits += course.getCredits();
        totalGradePoints += course.getGrade() * course.getCredits();
    }
    if(totalCredits == 0){ return 0; }
    return totalGradePoints / totalCredits;
}