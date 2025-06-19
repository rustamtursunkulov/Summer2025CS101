#include <iostream>
using namespace std;

double sumSeries(int n) {
    if (n == 1) return 1.0 / (1 * (1 + 2));
    return 1.0 / (n * (n + 2)) + sumSeries(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sumSeries(n);
    return 0;
}
