#include <iostream>
using namespace std;

int main() {
    int prime[1000];
    // Initialize the array, assuming all numbers are prime (set to 1)
    for(int &num : prime) {
        num = 1;
    }
    for(int i = 2; i < 1000; i++) {
        if(prime[i] == 1) {
            // Mark all multiples of i as 0 (non-prime)
            for(int k = 1, j = 0; j < 1000; k++, j = i * k) {
                prime[j] = 0;
            }
        }
    }
    cout << "The prime numbers between 2 and 999 are: ";
    for(int i = 2; i < 1000; i++) {
        if(prime[i] == 1) {
            cout << i << " ";
        }
    }
}