#ifndef CGPA_CALCULATOR_HPP
#define CGPA_CALCULATOR_HPP

#include "Course.hpp"
#include <bits/stdc++.h>

class CGPA_calculator{ 
    private:
        std::vector<Course> courses;
    public:
        void add_course(const Course& course);
        double calculate_cgpa();
};

#endif // CGPA_CALCULATOR_HPP