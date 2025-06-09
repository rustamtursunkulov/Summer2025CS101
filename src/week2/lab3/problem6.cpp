#include <iostream>
using namespace std;
int main () {
    char x;
    cout<<"Enter the character you want to check: ";
    cin>>x;
    if (x>='a' && x<='z') {
        cout<<x<<" is a lowercase alphabet\n";
    }
    else if (x>='A' && x<='Z') {
        cout<<x<<" is an uppercase alphabet\n";
    }
    else {
        cout<<x<<" is not an alphabet\n";
    }
    return 0;

}