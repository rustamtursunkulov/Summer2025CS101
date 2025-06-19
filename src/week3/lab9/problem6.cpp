#include <iostream>
using namespace std;

template<typename T>
void compareValues(T a, T b) {
    if (a == b)
        cout << "Values are equal\n";
    else
        cout << "Larger: " << (a > b ? a : b) << "\n";
}

template<typename T>
T middle(T a, T b, T c) {
    if ((a > b && a < c) || (a < b && a > c)) return a;
    if ((b > a && b < c) || (b < a && b > c)) return b;
    return c;
}

template<typename T>
double average(T a, T b) {
    return (a + b) / 2.0;
}

int main() {
    compareValues(5, 7);
    cout << middle(5, 7, 6) << endl;
    cout << average(4, 6) << endl;
    return 0;
}
