#include <iostream>
#include <cmath>
using namespace std;

int octal2Dec(const int& octalNumber) {
    int decimal = 0, oct = octalNumber, power = 0;
    while (oct > 0) {
        int digit = oct % 10;
        decimal += digit * pow(8, power++);
        oct /= 10;
    }
    return decimal;
}

int main() {
    int octal;
    cin >> octal;
    cout << octal2Dec(octal);
    return 0;
}
