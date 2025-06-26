#include <iomanip>
#include <iostream>
using namespace std;

    void printMatrix(int n) {
        for (int i=0; i<n;i++) {
            for (int j=0; j<n;j++) {
            int randomNum = rand()%1001;
                cout<<setw(5)<<randomNum<<" ";
            }
            cout<<endl;
        }

    }
int main() {
        srand(time(NULL));

        int num;
        cout<<"Enter the size of the Matrix: ";
        cin>>num;
        if (num <= 0) {
            cout << "Please enter a positive integer for n." << endl;
            return 1;
        }
            printMatrix(num);
            return 0;

    }

