#include <iostream>

int main() {
    int p = 40;
    int q = 17;

    std::cout << ( p & q ) << std::endl;
    std::cout << ( p | q ) << std::endl;
    std::cout << ( p ^ q ) << std::endl;
    std::cout << !p << std::endl;
    std::cout << !( p & q ) << std::endl;
    std::cout << !( p | q ) << std::endl;
    std::cout << ( p << 3 ) << std::endl;
    std::cout << ( p >> 3 ) << std::endl;

    return 0;
}
