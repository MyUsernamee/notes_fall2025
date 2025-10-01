#include <iostream>

int binomialCoeff(int n, int r)
{
    int res = 1;

    if (r > n - r)
        r = n - r;

    for (int i = 0; i < r; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int main () {
    int n = 9, r = 4;
    std::cout << "Value of C(" << n << ", " << r << ") is " << binomialCoeff(n, r);
    return 0;
}
