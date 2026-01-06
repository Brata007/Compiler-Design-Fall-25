#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int dfa[14][2] = {
        {1, 2},
        {1, 3},
        {4, 5},
        {6, 13},
        {1, 7},
        {1, 5},
        {1, 1},
        {8, 5},
        {1, 9},
        {8, 10},
        {11, 5},
        {1, 12},
        {11, 3},
        {13, 13}
    };
    int state = 0;
    for (char c : s) {
        if (c != 'a' && c != 'b') {
            state = 13;
            break;
        }
        state = dfa[state][c == 'b'];
    }
    if (state == 1 || state == 4 || state == 8 ||
        state == 9 || state == 11 || state == 12)
        cout << "ACCEPT\n";
    else
        cout << "REJECT\n";
    return 0;
}
