#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the number: ";
    int n1;
    cin>>n1;
    if (n1%5==0 && n1%3==0) {
        cout<<"FizzBuzz"<<endl;
    }
    else if (n1%5==0) {
        cout<<"Buzz"<<endl;
    }
    else if (n1%3==0) {
        cout<<"Fizz"<<endl;
    }
    else {
        cout<<"Not divisible by 3 or 5."<<endl;
    }
    return 0;
}