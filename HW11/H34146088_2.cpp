#include <iostream>
using namespace std;

int main() {
    int unique[20] = {};
    int counter = 1;
    int index = 0;
    cout << "Please enter 20 numbers which are between 10 and 100." << endl;
    while(counter <= 20) {
        cout << "Please enter " << counter << "th number: ";
        cin >> unique[index];
        while(unique[index] < 10 || unique[index] > 100) {
            cout << "Invalid input.\n"
                 << "Please enter " << counter << "th number again: ";
            cin >> unique[index];
        }
        // Check for duplicates if not the first element
        if(index != 0) {
            // Loop through existing unique values
            for(int i = 0; i < index; i++) {
                // If duplicate found, decrement index to overwrite
                if(unique[i] == unique[index]) {
                    index = index - 1;
                    break;
                }
            }
            // Move to next position
            index++;
        } else {
            // First element, just increment index
            index++;
        }
        // Increment counter for next input
        counter++;
    }
    cout << "The unique values that the user entered: ";
    for(int i = 0; i < index; i++) {
        cout << unique[i] << " ";
    }
}