#include <iostream>
#include <set>

int main(){
	std::set<int> myset;
	std::set<int>::iterator it;
	std::pair<std::set<int>::iterator, bool> ret;

	for (int i=1; i<=5; i++) myset.insert(i*10);

	ret = myset.insert(20);

	if (ret.second==false) it=ret.first;

	myset.insert(it, 25);
	myset.insert(it, 24);
	myset.insert(it, 26);

    int myints[]={5, 10, 15};
    myset.insert(myints, myints+3);

    // I am not going to lie, I don't know if we are supposed to make a seperate set and try to insert it or
    // Change the original set.
    std::set<int> second_set;

    second_set.insert(40);
    second_set.insert(41);
    second_set.insert(42);

    myset.insert(second_set.begin(), second_set.end());

    std::cout << "myset contains: ";
    for (it=myset.begin(); it!=myset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
