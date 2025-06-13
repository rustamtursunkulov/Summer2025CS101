#include<iostream>
using namespace std;
int main() {
    srand(time(0));
    int counter_for_odd = 0;
    int counter_for_even = 0;
    for (int i = 0; i <= 1000; i++) {
        int myrandomnum=rand();
        if (myrandomnum%2==0) {
            counter_for_odd++;

        }
        else {
            counter_for_even++;
        }
    }
    cout<<counter_for_odd<<endl;
    cout<<counter_for_even<<endl;
    return 0;
}