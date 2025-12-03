#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool isPunctuation(char c) {
    string punct = ";:,(){}[]+-*/=<>";
    for (int i = 0; i < punct.length(); i++) {
        if (c == punct[i]) return true;
    }
    return false;
}
void printToken(string token) {
    cout << token;
    for (int i = token.length(); i < 15; i++)
        cout << " ";

    if (token.length() == 1 && isPunctuation(token[0]))
        cout << "Punctuation\n";
    else
        cout << "Identifier\n";
}
void processLine(string line) {
    string token = "";
    for (int i = 0; i < line.length(); i++) {
        char c = line[i];
        if (isPunctuation(c)) {
            if (token != "") {
                printToken(token);
                token = "";
            }
            string p(1, c);
            printToken(p);
        }
        else if (c == ' ' || c == '\t') {
            if (token != "") {
                printToken(token);
                token = "";
            }
        }
        else {
            token += c;
        }
    }
    if (token != "")
        printToken(token);
    cout << "\n";
}
bool readTxtFile(string filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: Cannot open file.\n";
        return false;
    }
    string line;

    while(getline(file, line)) {
        processLine(line);
    }
    file.close();
    return true;
}
int main() {
    string filename = "Token.txt";

    if (readTxtFile(filename)) {
        cout << " Tokenization successfull"<<endl;
    } else {
        cout << "Error reading file.\n";
    }
    return 0;
}
