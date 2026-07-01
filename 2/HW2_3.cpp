#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Please enter x : ";
    cin >> x;
    cout << "Please enter y : ";
    cin >> y;

    //a)
    if (x < 10)
        if (y > 10)
            cout << "*****" << endl;
        else
            cout << "#####" << endl;
    cout << "$$$$$" << endl;
        
    //b)
    if ( x < 10 ) {
        if ( y > 10 )
            cout << "*****" << endl;
    }
    else {
        cout << "#####" << endl;
        cout << "$$$$$" << endl;    
    }

    return 0;
}