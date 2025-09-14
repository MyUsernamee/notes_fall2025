#include <iostream>

#define MIN_AGE 21
#define MIN_YEARS_DRIVING 5

int main () {
    int current_age, years_driving;

    std::cout << "How old are you?" << std::endl;
    // std::cin >> current_age;
    current_age = 21;

    std::cout << "How many years have you been driving?" << std::endl;
    // std::cin >> years_driving;
    years_driving = 5;

    if (current_age >= MIN_AGE && years_driving >= MIN_YEARS_DRIVING)
        std::cout << "You meet the requirements for a loan." << std::endl;

    return 0;
}
