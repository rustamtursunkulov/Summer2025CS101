#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number you want to reverse: ";
    cin>>num;
    cout<<"The reversed version of "<<num<<" = ";
    while (num>0) {
        cout<<num%10;
        num=num/10;
    }
}