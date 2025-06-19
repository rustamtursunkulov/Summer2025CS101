#include <iostream>
using namespace std;

int minimum(int a, int b, int c) {
    if (a < b && a < c) return a;
    if (b < c) return b;
    return c;
}

int maximum(int a, int b, int c) {
    if (a > b && a > c) return a;
    if (b > c) return b;
    return c;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Maximum: " << maximum(a, b, c) << endl;
    cout << "Minimum: " << minimum(a, b, c);
    return 0;
}