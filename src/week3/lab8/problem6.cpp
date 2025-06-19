#include <iostream>
using namespace std;

void reverseDigits(int &x) {
    int rev = 0, temp = x;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    x = rev;
}

int main() {
    int num = 786;
    reverseDigits(num);
    cout << "Reversed: " << num << endl;
    return 0;
}
