#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cin >> num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "The sum of digits is " << sum;
    return 0;
}