#include <iostream>
#include <fstream>
using namespace std;
bool checkIdentifier(const string &word)
{
    if (word.empty())
        return false;
    if (!isalpha(word[0]) && word[0] != '_')
        return false;
    for (size_t i = 1; i < word.length(); ++i)
    {
        if (!isalnum(word[i]) && word[i] != '_')
            return false;
    }
    return true;
}
int main()
{
    ifstream inputFile("textfile.txt");
    string line;
    if (!inputFile)
    {
        cerr << "Error: Unable to open file.\n";
        return 1;
    }
    while (getline(inputFile, line))
    {
        if (checkIdentifier(line))
            cout << line << " : Valid Identifier" << endl;
        else
            cout << line << " : Invalid Identifier" << endl;
    }
    inputFile.close();
    return 0;
}
