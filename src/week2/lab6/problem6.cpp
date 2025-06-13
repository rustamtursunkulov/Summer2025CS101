#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cin >> num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    cout << reversed;
    return 0;
}