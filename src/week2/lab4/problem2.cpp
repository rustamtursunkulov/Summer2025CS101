#include <iostream>
using namespace std;
int main() {
    int grade;
    cout<<"Please input your grade: ";
    cin>>grade;

    switch (grade/10) {
        case 10: cout<<'A';
            break;
        case 9: cout<<'A';
            break;
        case 8: cout<<'B';
            break;
        case 7: cout<<'C';
            break;
        case 6: cout<<'D';
            break;
        default: cout<<"F"<<endl;
    }
    return 0;
}