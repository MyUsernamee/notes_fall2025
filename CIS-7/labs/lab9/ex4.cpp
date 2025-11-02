#include <iostream>

int factorial(int n) {
    if (n > 1)
        return n * factorial(n-1);
    return 1;
}

int main () {
    int n;
    std::cout << "Enter a number to find the factorial of: " << std::endl;

    std::cin >> n;
    std::cout << "The factorial of " << n << " = " << factorial(n) << std::endl;
    return 0;
}

