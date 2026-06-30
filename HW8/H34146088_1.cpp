#include <iostream>
using namespace std;

void reverse_digits(int);
// Assume the problem concerns operations on positive integers.
int main() {
    int num;
    cout << "Please enter an unsigned integer: ";
    cin >> num;
    while(num < 0) {
        cout << "Invalid input." << endl;
        cout << "Please enter an unsigned integer: ";
        cin >> num;
    }
    reverse_digits(num);
    return 0;
}

void reverse_digits(int num) {
    cout << "Reversed digits are: ";
    while(num != 0) {
        cout << num % 10;
        num /= 10;
    }
    cout << endl;
}