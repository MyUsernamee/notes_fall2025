#include <iostream>

std::string encrypt(std::string text, int s)
{
    std::string result = "";

    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 + 65);
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }

    return result;
}

int main () {
    std::string text = "ATACKATONCE";

    int s = 6;
    std::cout << "Text: " << text << '\n';
    std::cout << "Shift: " << s << '\n';
    std::cout << "Text: " << text << '\n';
    std::cout << "Cipher: " << encrypt(text, s) << '\n';

    return 0;
}
