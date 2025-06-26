#include <iostream>
using namespace std;
int main() {
    int arr[5];
    bool FoundnonNegative = false;
    cout << "Enter 5 numbers: ";
    for (int i = 1; i <= 5; i++) {
        cin >> arr[i];

        if (arr[i]>=0) {
            FoundnonNegative = true;
        }
    }
        if (FoundnonNegative) {
            cout << 1<<endl;
        }
        else {
            cout<<0<<endl;
        }

    return 0;
    }

