#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int max, t;
    cout<<"Enter "<<n<< " numbers: ";
    cin>>max;
    for (int i = 2; i<=n; i++) {
        cin>>t;
        if (max<t) {
            max=t;
        }
    }
    cout<<"Maximum number among them is "<<max<<endl;
}