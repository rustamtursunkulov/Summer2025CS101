#include <iostream>
using namespace std;

void fun(double a , double b) {
    cout << "area = " << a * b << endl;
    cout <<"perimeter = " << 2*(a + b) << endl;

}

int main() {
    double a,b;
    cin >> a>>b;
    fun(a,b);
    return 0;
}
