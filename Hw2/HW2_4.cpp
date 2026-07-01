#include <iostream>
using namespace std;

int main() {
    cout << " a) " << endl;
    int x = 5, y = 8;
    if (y == 8)
        if (x ==5)
            cout << "@@@@@" << endl;
        else 
            cout << "#####" << endl;
    cout << "$$$$$" << endl;
    cout << "&&&&&" << endl;

    cout << " b) " << endl;
    if (y == 8)
        if (x ==5)
            cout << "@@@@@" << endl;
        else {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
            cout << "&&&&&" << endl;
        }

    cout << " c) " << endl;
    if (y == 8)
        if (x ==5)
            cout << "@@@@@" << endl;
        else {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
        }
    cout << "&&&&&" << endl;

    cout << " d) " << endl;
    x = 5;
    y = 7;
    if (y == 8){
        if (x == 5)
            cout << "@@@@@" << endl;
    } else {
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }
    
    return 0;
}