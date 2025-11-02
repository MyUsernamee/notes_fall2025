#include <iostream>
#include <algorithm>

int Nth_of_AP(int a, int d, int N)
{
    return (a + (N-1) * d);
}

int main () {
    int a = 1;
    int d = 7;
    int N = 15;

    std::cout << "The " << N << "th term of the series is : " << Nth_of_AP(a, d, N);

    return 0;
}
