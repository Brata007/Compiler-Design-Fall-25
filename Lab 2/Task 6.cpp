#include <iostream>
using namespace std;
void findMinMax(int numbers[], int size) {
    int minValue = numbers[0];
    int maxValue = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] < minValue)
            minValue = numbers[i];
        if (numbers[i] > maxValue)
            maxValue = numbers[i];
    }
    cout << "Smallest number: " << minValue << endl;
    cout << "Largest number: " << maxValue << endl;
}
int main() {
    int size;
    cout << "Enter total number of elements: ";
    cin >> size;

    int numbers[size];
    cout << "Enter the numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    findMinMax(numbers, size);
    return 0;
}
