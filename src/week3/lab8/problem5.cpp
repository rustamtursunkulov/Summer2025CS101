#include <iostream>
using namespace std;

void power_two(int &x) {
    x = x * x;
}

int main() {
    int a = 4;
    power_two(a);
    cout << "Result: " << a << endl;
    return 0;
}
