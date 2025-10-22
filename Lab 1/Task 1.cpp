#include <iostream>
using namespace std;
bool isNum(string s)
{
    for (int i = 0;i<s.length();i++)
    {
        if(s[i] <= 47 || s[i] >= 58)
            {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if (isNum(s))
        {
        cout << s << " is a number" << endl;
    } else
    {
        cout << s << " is not a number" << endl;
    }
    return 0;
}


