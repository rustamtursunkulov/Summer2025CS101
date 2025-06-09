#include <iostream>
using namespace std;
int main () {
    int x;
    cout<<"Enter a 4-digit positive integer: ";
    cin>>x;
    if (x<1000 || x>9999) {
        cout<<"Invalid input. Please enter a 4-digit positive integer\n";
        return 1;
    }
    int evenCount = 0, oddCount = 0;
    int digit;

    int temp=x;
    while (temp>0) {digit = temp%10;
        if (digit % 2==0)
            evenCount++;
        else
            oddCount++;
        temp/=10;
    }
    if (evenCount>oddCount) {
        cout<<"More even digits\n";
    }
    else if (oddCount>evenCount) {
        cout<<"More odd digits\n";
    }
    else {
        cout<<"Equal even and odd digits\n";
    }
    return 0;
}
