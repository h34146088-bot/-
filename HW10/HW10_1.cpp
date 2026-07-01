#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int rollDice();
bool craps();

int main() {
    int bankBalance = 1000;
    int wager;
    srand(time(0));
    cout << "Please enter a wager: ";
    cin >> wager;
    while(wager > bankBalance || wager < 0) {
        cout << "Invalid wager. Please enter again: ";
        cin >> wager;
    }
    while(wager != -1) {
        if(craps()) {
            bankBalance = bankBalance + wager;
            cout << "The new bankBalance is " << bankBalance << endl;
        } else {
            bankBalance = bankBalance - wager;
            cout << "The new bankBalance is " << bankBalance << endl;
        }
        if(bankBalance == 0) {
            cout << "Sorry. You busted!" << endl;
            break;
        }
        if(bankBalance > 5000) {
            cout << "You're up big. Now's the time to cash in your chips!" << endl;
        } else {
            switch(rand() % 2) {
            case 0:
                cout << "Oh, you're going for broke, huh?" << endl;
                break;
            case 1:
                cout << "Aw cmon, take a chance!" << endl;
                break;
            }
        }
        cout << "Please enter a wager or -1 to exit: ";
        cin >> wager;
        while(wager > bankBalance) {
            cout << "Invalid wager. Please enter again: ";
            cin >> wager;
        }
    }
}

bool craps() {
    enum Status { CONTINUE,
                  WON,
                  LOST };
    int myPoint;
    Status gameStatus;
    int sumOfDice = rollDice();
    switch(sumOfDice) {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sumOfDice;
        cout << "Point is " << myPoint << endl;
        break;
    }
    while(gameStatus == CONTINUE) {
        sumOfDice = rollDice();
        if(sumOfDice == myPoint)
            gameStatus = WON;
        else if(sumOfDice == 7)
            gameStatus = LOST;
    }
    if(gameStatus == WON) {
        cout << "Player wins" << endl;
        return true;
    } else {
        cout << "Player loses" << endl;
        return false;
    }
}

int rollDice() {
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;
    cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}