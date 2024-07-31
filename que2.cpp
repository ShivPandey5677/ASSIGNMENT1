#include <iostream>

using namespace std;

int main() {
    int n;
    float sum = 0.0, average;

    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[n];

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    average = sum / n;

    cout << "The average of the entered integers is: " << average << endl;

    return 0;
}
