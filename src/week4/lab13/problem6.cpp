#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int input;

    cout << "Enter integers (0 to stop):" << endl;
    while (true) {
        cin >> input;
        if (input == 0) break;
        numbers.push_back(input);
    }

    if (numbers.empty()) {
        cout << "Vector is empty." << endl;
        return 0;
    }


    cout << "Front element: " << numbers.front() << endl;
    cout << "Back element: " << numbers.back() << endl;

    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it < 10) {
            it = numbers.erase(it);
        } else {
            ++it;
        }
    }

    if (numbers.size() >= 1) {
        numbers.insert(numbers.begin() + 1, 33);
    } else {

        numbers.push_back(33);
    }


    if (numbers.size() >= 2) {
        numbers.insert(numbers.end() - 1, 55);
    } else {

        numbers.push_back(55);
    }


    cout << "Vector after modifications:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
