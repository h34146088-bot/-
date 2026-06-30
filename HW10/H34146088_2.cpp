#include <iostream>
using namespace std;

// Call by value passes a copy of the variable.
int tripleByValue(int);
// Call by reference passes an alias to the original variable.
void tripleByReference(int &);

int main() {
    int count;
    cout << "Please enter a number: ";
    cin >> count;
    cout << "Triple number of pass by value: " << tripleByValue(count) << endl;
    tripleByReference(count);
    cout << "Triple number of pass by reference: " << count << endl;
}

int tripleByValue(int count) {
    count = count * count * count;
    return count;
}

void tripleByReference(int &countRef) {
    countRef = countRef * countRef * countRef;
}