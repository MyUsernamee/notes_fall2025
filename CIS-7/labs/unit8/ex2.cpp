#include <algorithm>
#include <iostream>
#include <stdio.h>

int sumOfAP(int a, int d, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a;
        a += d;
    }
    return sum;
}

int main () {
    int n = 30;
    int a = 4, d = 10;
    std::cout << "Arithmetic sequence sum: " << sumOfAP(a, d, n) << '\n';
    return 0;
}
