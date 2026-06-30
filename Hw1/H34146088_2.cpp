#include <iostream>
using namespace std;

int main() {
    cout << "Using one statement with one stream insertion operator:" << endl;
    cout << "1 2 3 4";
    cout << endl;
    cout << "Using one statement with four stream insertion operators:" << endl;
    cout << "1 " << "2 " << "3 " << 4 ;
    cout << endl;
    cout << "Using four statements:" << endl;
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4 ";
    return 0;
}