#include <iostream>
using namespace std;
double product(double a, double b) {
    return a * b;

}

int main() {
    double a, b;
    cin >> a >> b;
    cout << product(a, b) << endl;
    return 0;

}