#include <iostream>
using namespace std;

int multiply(int a, int b) {
    if (b == 0) return 0;
    if (b > 0) return a + multiply(a, b - 1);
    return -multiply(a, -b);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << multiply(x, y);
    return 0;
}
