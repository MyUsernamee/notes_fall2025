#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int myints[] = {8, 7, 3, 4};

    // sort the array in ascending order
    sort(myints, myints + 4);

    cout << "The 4! possible permutations with 4 elements:\n";
    int i = 1;

    do {
        cout << i << ": " << myints[0] << ' ' << myints[1] << ' '
             << myints[2] << ' ' << myints[3] << '\n';
        i++;
    } while (next_permutation(myints, myints + 4));

    cout << "After loop: " << myints[0] << ' ' << myints[1] << ' '
         << myints[2] << ' ' << myints[3] << '\n';

    return 0;
}
