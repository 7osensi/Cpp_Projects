#include "main.hpp"

using namespace std;

int main(){
    CGPA_calculator calc;
    calc.add_course(Course("Math", 2, 3));
    calc.add_course(Course("English", 3, 3));
    calc.add_course(Course("Science", 4, 3));
    cout << "CGPA: " << calc.calculate_cgpa() << endl;
    return 0;
}