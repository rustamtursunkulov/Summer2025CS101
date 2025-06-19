#include<iostream>
using namespace std;
void fun(double R) {
    cout << "circumference = " << R * 2*3.14 << endl;
    cout << "area = " << R * R * 3.14 << endl;

}

int main() {
    double R;
    cin >> R;
    fun(R);
    return 0;
}
