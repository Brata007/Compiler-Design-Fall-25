#include <iostream>
#include <string>
using namespace std;
bool checkIdentifier(const string& text) {
    if (text.size() == 0)
        return false;
    auto isLetter = [](char ch) {
        return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
    };
    auto isDigit = [](char ch) {
        return (ch >= '0' && ch <= '9');
    };
    if (!(isLetter(text[0]) || text[0] == '_'))
        return false;

    for (char ch : text.substr(1)) {
        if (!(isLetter(ch) || isDigit(ch) || ch == '_'))
            return false;
    }
    return true;
}
int main() {
    cout << "Enter an Identifier : ";
    string input;
    cin >> input;
    if (checkIdentifier(input))
        cout << "Identifier is valid\n";
    else
        cout << "Invalid identifier\n";
    return 0;
}
