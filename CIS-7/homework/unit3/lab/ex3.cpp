#include <iostream>
#include <set>

int main() {
    std::set<int> myset;

    myset.insert(100);
    myset.insert(200);
    myset.insert(300);

    std::cout << "myset contains:";
    for(std::set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
        std::cout << " " << *it;
    std::cout << "\n";

    myset.insert(0);

    myset.insert(1101);
    myset.insert(2202);

    std::cout << "myset contains:";
    for(std::set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
        std::cout << " " << *it;
    std::cout << "\n";

    return 0;
}
