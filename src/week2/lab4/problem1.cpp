#include <iostream>
using namespace std;
int main() {
    char light;
    cout << "Please enter a first character of light: ";
    cin >> light;
    switch (light) {
        case 'g': cout<<"Go!";
            break;
        case 'y': cout<<"Get ready!";
            break;
        case 'r': cout<<"Stop!";
            break;
    }
return 0;
}
