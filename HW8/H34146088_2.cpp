#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int flip();

int main() {
    int heads = 0;
    int tails = 0;
    srand(time(0));
    for(int i = 0; i < 100; i++) {
        int result = flip();
        cout << i + 1 << ".";
        switch(result) {
        case 1:
            heads++;
            cout << "Heads" << endl;
            break;
        case 0:
            tails++;
            cout << "Tails" << endl;
        }
    }
    cout << "Heads appeared " << heads << " times." << endl;
    cout << "Tails appeared " << tails << " times." << endl;
}

int flip() {
    return rand() % 2;
}