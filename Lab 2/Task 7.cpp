#include <iostream>
using namespace std;
void fullName(string first, string last) {
    cout << "Full Name = " << first + " " + last << endl;
}
int main() {
    string firstName, lastName;

    cout << "Enter First Name: ";
    cin >> firstName;
    cout << "Enter Last Name: ";
    cin >> lastName;
    fullName(firstName, lastName);
    return 0;
}
