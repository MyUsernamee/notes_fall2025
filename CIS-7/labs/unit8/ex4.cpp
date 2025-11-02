#include <algorithm>
#include <iostream>

double sumOfGP(double a, double r, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += a;
        a *= r;
    }
    return sum;
}

int main()
{
    double a = 2;
    double r = 1.0 / 4.0;
    int n = 8;
    
    std::cout << sumOfGP(a, r, n) << '\n';
    return 0;
}
