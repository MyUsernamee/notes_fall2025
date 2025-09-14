#include <iostream>
#include <set>

int main(){
    int myints[] = {};
    std::set<int> myset (myints, myints);

    std::cout << "myset contains:" ;
    for (auto it = myset.begin(); it != myset.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n' ;

    return 0;
}
