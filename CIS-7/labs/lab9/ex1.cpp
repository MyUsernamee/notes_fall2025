#include <iostream>
#include <algorithm>

int fib(int n) {
    if (n <= 2)
        return std::min(n, 1);
    int a = 1;
    int b = 1;
    for (int i = 0; i < n - 2; i++) {
        int c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main () {
    int n = 18;
    std::cout << fib(n) << std::endl;
    return 0;
}
