#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        cout << "1/" << i;
        if (i < n) cout << " + ";
        sum += 1.0 / i;
    }
    cout << endl << "The sum is " << sum;
    return 0;
}