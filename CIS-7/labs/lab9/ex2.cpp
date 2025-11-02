#include <iostream>
#include <algorithm>

int fib(int n) {
    int a = 1, b=1, c, i;
    if ( n == 0 )
        return a;

    for (int i = 2; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main () {
    int n = 14;
    std::cout << fib(n) << std::endl;
    return 0;
}
