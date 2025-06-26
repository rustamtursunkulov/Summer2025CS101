#include <iostream>
using namespace std;

int main() {
    int year, ace;
    cout<<"Enter the year: ";
    cin>>year;
    if (year%100 == 0) {
        ace = year / 100;
    }
    else {
        ace = (year / 100)+1;
    }

    cout<<"Ace: "<<ace<<endl;
    return 0;
}