#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int count[7] = {0}; 
    srand(time(0));
    for(int i = 0; i < 10000; i++) {
        int roll = rand() % 6 + 1;
        count[roll]++;
    }
    for(int i = 1; i <= 6; i++)
        cout << i << ": " << count[i] << endl;
    return 0;
}
