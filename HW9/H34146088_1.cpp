#include <iostream>
using namespace std;

bool isPrime1(int);
bool isPrime2(int);

int main() {
    int num, count = 0;
    double elapsed_sec;
    clock_t start, end;
    cout << "Prime numbers: ";
    for(num = 2; num <= 10000; num++) {
        if(isPrime1(num)) {
            cout << num << ",";
        }
    }
    cout << endl;
    // Compare the performance of isPrime1 and isPrime2.
    start = clock(); // start CPU clock

    for(num = 2; num <= 10000; num++) {
        if(isPrime1(num)) {
            ++count;
        }
    }

    end = clock(); // end CPU clock
    elapsed_sec = double(end - start) / CLOCKS_PER_SEC;
    cout << "Using the method that n/2 is the upper limit elapsed time: " << elapsed_sec << " seconds" << endl;
    start = clock(); // start CPU clock

    for(num = 2; num <= 10000; num++) {
        if(isPrime2(num)) {
            ++count;
        }
    }

    end = clock(); // end CPU clock
    elapsed_sec = double(end - start) / CLOCKS_PER_SEC;
    cout << "Using the method that square root of n is the upper limit elapsed time: " << elapsed_sec << " seconds" << endl;
}

bool isPrime1(int num) {
    int prime = 0;
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            prime++;
            break;
        }
    }
    if(prime == 0) {
        return true;
    } else {
        return false;
    }
}

// If n is composite then n = a * b for some integers a and b with 1 < a <= b < n.
// Because a <= b we have a <= sqrt(n). Therefore any nontrivial factor a must be <= sqrt(n).
// Hence, if no divisor ≤ sqrt(n) divides n, n must be prime.
// In code you can test this efficiently with the loop condition `i * i <= n` to avoid calling sqrt().
bool isPrime2(int num) {
    int prime = 0;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            prime++;
            break;
        }
    }
    if(prime == 0) {
        return true;
    } else {
        return false;
    }
}
