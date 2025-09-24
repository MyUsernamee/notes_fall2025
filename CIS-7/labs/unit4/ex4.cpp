#include <iostream>
#include <algorithm>
using namespace std;

// Function to print permutations of string str
// 'out' is used to store permutations one by one
void permute(string str, string out) {
    // When size of str becomes 0, out has a permutation
    if (str.size() == 0) {
        cout << out << endl;
        return;
    }

    for (int i = 0; i < str.size(); i++) {
        // Remove first character from str and add it to out
        permute(str.substr(1), out + str[0]);

        // Rotate string so the next character comes to front
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}

// Driver code
int main() {
    string str = "ABCDEF";
    permute(str, "");
    return 0;
}
