#include <iostream>

int binomialCoeff(int n, int r)
{
    if (r == 0 || r == n)
        return 1;

    return binomialCoeff(n - 1, r - 1) + binomialCoeff(n - 1, r);
}

int main () {
    int n = 8, r = 4;
    std::cout << "Value of C(" << n << ", " << r << ") is " << binomialCoeff(n, r);
    return 0;
}
