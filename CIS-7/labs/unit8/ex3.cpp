#include <iostream> 
#include <algorithm>

int main () 
{
    double a, d, n, i, sum, j;

    std::cout << "Enter starting value: \n";
    std::cin >> a;
    std::cout << "Enter difference: \n";
    std::cin >> d;
    std::cout << "Enter the term: \n";
    std::cin >> n;
    std::cout << "\n";

    for (int i=a; i<(n*d + a); i+=d) {
        sum += i;
        std::cout << i << ", " << "\n";
    }
 
    std::cout << sum << " is the sum.";
    return 0;
}
