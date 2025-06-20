#include <iostream>
using namespace std;

int indexOfLargestElement(double arr[], int size) {
    int index = 0;
    for(int i = 1; i < size; i++)
        if(arr[i] >= arr[index])
            index = i;
    return index;
}

int main() {
    double arr[15];
    for(int i = 0; i < 15; i++)
        cin >> arr[i];
    cout << "Index of largest = " << indexOfLargestElement(arr, 15) << endl;
    return 0;
}
