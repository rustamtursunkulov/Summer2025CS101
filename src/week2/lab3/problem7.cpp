#include <iostream>
using namespace std;
int main() {
    int a, b, c, x;
    cout<<"Enter a 3-digit number: ";
    cin>>x;
    if (x<100 || x>999) {
        cout<<"Invalid input. Please enter a 3-digit number.\n";
        return 1;
    }
    int digit1 = x/100;
    int digit3 = x%10;

    if (digit1==digit3){cout<<x<<" is a palindrome \n";}
    else{cout<<x<<" is not a palindrome \n";}
    return 0;

}