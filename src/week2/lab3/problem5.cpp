#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the lengths of the triangle: ";
    float a, b, c;
    cin>>a>>b>>c;
    if(a+b<c || a+c<b|| b+c<a) {
        cout<<"Not a triangle!"<<endl;
    }
    else if (a==b && b==c && c==a) {
        cout<<"Equilateral"<<endl;
    }
    else if (a==b || a==c || b==c) {
        cout<<"Isosceles\n";
    }
    else {
        cout<<"Scalene\n";
    }
    return 0;

}