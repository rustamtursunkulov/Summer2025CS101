#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number you want to check whether it is prime or not: ";
    cin>>num;
    int count=0;
    for (int i = 0; i <= num; i++) {
        if (num%i==0) {
            count++;
        }
    }
    if (count==2) {
        cout<<"Prime\n";
    }
    else {cout<<"Not prime\n";}
    return 0;
}