#ifndef COURSE_HPP
#define COURSE_HPP

#include <bits/stdc++.h>

class Course{
    private:
        std::string course_name;
        int grade;
        int credits;
    public:
        Course(std::string course_name, int grade, int credits);
        std::string getName() const;
        int getCredits() const;
        double getGrade() const;
};

#endif // COURSE_HPP