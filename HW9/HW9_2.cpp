#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// Use a binary-search strategy: always guess the midpoint of the current possible interval.
// Each guess cuts the number of possible values by at least half.
// Starting with 1000 possibilities, after k guesses there are at most 1000 / 2^k possibilities.
// To guarantee a single remaining possibility we need 2^k >= 1000.
// 2^10 = 1024 > 1000 and 2^9 = 512 < 1000, so k = 10 suffices.
// Therefore any number from 1 to 1000 can be found in at most 10 guesses using binary search.

int main() {
    int guess, ans;
    int count = 0;
    char again = 'y';
    while(again == 'y') {
        srand(time(0));
        ans = (rand() % 1000 + 1);
        cout << "I have a number between 1 and 1000." << endl;
        cout << "Can you guess my number?" << endl;
        cout << "Please type your first guess." << endl;
        cin >> guess;
        count++;
        while(guess != ans) {
            if(guess < ans) {
                cout << "Too low. Try again." << endl;
                cin >> guess;
            } else if(guess > ans) {
                cout << "Too high. Try again." << endl;
                cin >> guess;
            }
            count++;
        }
        if(guess == ans) {
            cout << "Excellent! You guessed the number!" << endl;
            if(count < 10) {
                cout << "Either you know the secret or you got Lucky!" << endl;
            } else if(count == 10) {
                cout << "Ahah! You know the secret!" << endl;
            } else {
                cout << "You should be able to do better!" << endl;
            }
            cout << "Would you like to play again (y or n)?" << endl;
            cin >> again;
        }
    }
}
