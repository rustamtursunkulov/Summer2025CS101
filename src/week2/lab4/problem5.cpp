#include <iostream>
using namespace std;
int main() {
    srand(time(nullptr));
    int r=1+rand()%100;
    string guess;
    cin>>guess;
    if(r%2==0&&guess=="even"){
        cout<<"You won!";
    } else if(r%2==1&&guess=="odd") {
        cout<<"You won!";
    }else {
        cout<<"You lost! "<<r<<endl;
    }
}