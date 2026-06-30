#include <iostream>
using namespace std;

void isPerfect(int);

int main() {
    for(int i = 1; i <= 1000; i++) {
        isPerfect(i);
    }
    cout << "Testing numbers much larger than 1000: " << endl;
    for(int i = 1000; i <= 10000; i++) {
        isPerfect(i);
    }
    return 0;
}

void isPerfect(int number) {
    int sum = 0;
    // iterate through possible proper divisors (1 .. number-1)
    for(int i = 1; i < number; i++) {
        // if i divides number evenly, add it to the sum of divisors
        if(number % i == 0) {
            sum += i;
        }
    }
    // if sum of proper divisors equals the number, it's a perfect number
    if(number == sum) {
        cout << number << " is a perfect number, and its divisors are: ";
        // print each proper divisor
        for(int i = 1; i < number; i++) {
            if(number % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}