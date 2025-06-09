#include <iostream>
using namespace std;
int main() {
    cout<<"Enter three numbers: ";
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    if (n1>n2&&n1>n3) {
        cout<<n1<<" is the largest."<<endl;
    }
    else if (n2>n1&&n2>n3) {
        cout<<n2<<" is the largest."<<endl;
    }
    else {
        cout<<n3<<" is the largest."<<endl;
    }
    return 0;
}