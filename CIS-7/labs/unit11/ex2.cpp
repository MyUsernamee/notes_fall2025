#include <iostream>

std::string encode(std::string message, int shift) {
    
    std::string output;

    for (auto character: message) {
        if (character < 'a')
            output += (character - 'A' + shift) % 26 + 'A';
        else
            output += (character - 'a' + shift) % 26 + 'a';
    }

    return output;
}

int main() {
    std::string message;
    char ch;
    int key;

    std::cout << "Enter a message to encrypt: ";
    std::cin >> message;
    std::cout << "Enter shift value: ";
    std::cin >> key;
    
    auto encoded_output = encode(message, key);

    std::cout << encoded_output << std::endl;
}
