#include <cmath>
#include <iostream>
using namespace std;
int main() {
    float a,b,c,D;
    cout<<"Enter the coefficients: ";
    cin>>a>>b>>c;
    D=(b*b-4*a*c);
    if(D<0) {
        cout<<"There is no solution"<<endl;
    }
    else if(D==0) {
        float x=-b/(2*a);
        cout<<"X="<<x<<endl;}
    else if(D>0) {
        float x1=(-b+sqrt(D))/(2*a);
        float x2=(-b-sqrt(D))/(2*a);
        cout<<"x1="<<x1<<"\nx2="<<x2<<endl;
    }
    return 0;
}