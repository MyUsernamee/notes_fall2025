#include <iostream>

#define MIN_UNITS 60
#define MIN_SEMESTERS 5

int main () {
    int completed_units, completed_semesters;

    std::cout << "How many units have you completed?" << std::endl;
    // std::cin >> completed_units;
    completed_units = 60;

    std::cout << "How many semesters have you completed?" << std::endl;
    // std::cin >> completed_semesters;
    completed_semesters = 5;

    if (completed_units >= MIN_UNITS || completed_semesters >= MIN_SEMESTERS)
        std::cout << "You have earned your associates degree!" << std::endl;


    return 0;
}
