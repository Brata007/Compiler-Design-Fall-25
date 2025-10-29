#include <iostream>
using namespace std;
double findAverage(const int arr[], int size) {
    if (size == 0)
        return 0.0;
    int sum = 0;
    for (int i = 0; i < size; ++i)
        sum += arr[i];
    return static_cast<double>(sum) / size;
}
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n <= 0)
        {
        cout << "Invalid array size\n";
        return 0;
    }
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    double average = findAverage(arr, n);
    cout << "Average value of array elements = " << average << endl;
    return 0;
}
