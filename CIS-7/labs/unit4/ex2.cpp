#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int myints[] = {11, 12, 3, 4, 5};

    sort(myints, myints + 5);
    reverse(myints, myints + 5);

    cout << "The 5! possible permutations with 5 elements:\n";
    int i = 1;

    do {
        cout << i << ": " << myints[0] << ' ' << myints[1] << ' '
             << myints[2] << ' ' << myints[3] << " " <<  myints[4] << '\n';
        i++;
    } while (prev_permutation(myints, myints + 5));

    cout << "After loop: " << myints[0] << ' ' << myints[1] << ' '
         << myints[2] << ' ' << myints[3] << ' ' << myints[4] << '\n';

    return 0;
}
