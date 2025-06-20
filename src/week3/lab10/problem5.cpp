#include <iostream>
using namespace std;

bool strictlyEqual(const int list1[], const int list2[], int size) {
    for(int i = 0; i < size; i++)
        if(list1[i] != list2[i])
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    int list1[n], list2[n];
    for(int i = 0; i < n; i++)
        cin >> list1[i];
    for(int i = 0; i < n; i++)
        cin >> list2[i];
    if(strictlyEqual(list1, list2, n))
        cout << "Two lists are strictly identical" << endl;
    else
        cout << "Two lists are not strictly identical" << endl;
    return 0;
}
