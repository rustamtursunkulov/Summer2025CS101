#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    if (height == 0) {
        cout << "The depth is 0" << endl;
    } else if (height < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        for (int i = 1; i <= height; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i;
            }
            cout << endl;
        }
    }

    return 0 ;
}
