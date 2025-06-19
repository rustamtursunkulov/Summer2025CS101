#include <iostream>
using namespace std;

void sayHello() {
    static int count = 0;
    count++;
    cout << "Hello! Called " << count << " times\n";
}

int main() {
    sayHello();
    sayHello();
    sayHello();
    return 0;
}
