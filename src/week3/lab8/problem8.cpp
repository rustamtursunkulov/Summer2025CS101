#include <iostream>
using namespace std;

int sum_numbers(int n) {
    if (n == 1) return 1;
    return n + sum_numbers(n - 1);
}

int main() {
    cout << "Sum is: " << sum_numbers(5) << endl;
    return 0;
}
