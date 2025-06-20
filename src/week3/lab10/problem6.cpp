#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char ch;
    int upper = 0, lower = 0, digit = 0, special = 0;
    for(int i = 0; i < n; i++) {
        cin >> ch;
        if(isupper(ch)) upper++;
        else if(islower(ch)) lower++;
        else if(isdigit(ch)) digit++;
        else special++;
    }
    cout << "Uppercase:" << upper << endl;
    cout << "Lowercase:" << lower << endl;
    cout << "Digit:" << digit << endl;
    cout << "Special:" << special << endl;
    return 0;
}
