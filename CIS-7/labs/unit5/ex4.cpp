#include <iostream>
#include <algorithm>
#include <array>
#include <cstring>

int binominalCoefficients(int n, int r){
    int coef[r+1];
    memset(coef, 0, sizeof(coef));
    coef[0] = 1;
    for (int i = 1; i <= n; i++) {
        for(int j = std::min(i, r); j > 0; j--)
            coef[j] = coef[j] + coef[j-1];
    }

    return coef[r];
}

int main() {
    int n=8, r=6;
    std::cout << "The value of C(" << n << ", " << r << ") is " <<binominalCoefficients(n, r);
    return 0;
}
