#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    int countOdd = 0;
    int* ptr = arr;
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) % 2 != 0) {
            countOdd++;
        }
    }

    cout << "Number of odd elements: " << countOdd << endl;

    delete[] arr;

    return 0;
}