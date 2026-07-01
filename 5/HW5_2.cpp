#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "(a)" << endl;
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= i; j++)
            cout << '*';
        cout << endl;
    }

    cout << "(b)" << endl;
    for (int i = 10; i >= 1; i--){
        for (int j = 1; j <= i; j++)
            cout << '*';
        cout << endl;
    }

    cout << "(c)" << endl;
    for (int i = 10; i >= 1; i--){
        for (int k = 10; k > i; k--)
            cout << ' ';
        for (int j = 1; j <= i; j++)
            cout << '*';
        cout << endl;
    }

    cout << "(d)" << endl;
    for (int i = 1; i <= 10; i++){
        for (int k = 10; k > i; k--)
            cout << ' ';
        for (int j = 1; j <= i; j++)
            cout << '*';
        cout << endl;
    }

    cout << "Print all four patterns side by side." << endl;
    cout << "(a)" << setw(10) << "(b)" << setw(10) << "(c)" << setw(10) << "(d)" << endl;
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= i; j++)
            cout << '*';
        for (int k = 10; k > i; k--)
            cout << ' ';
        for (int l = 10; l >= i; l--)
            cout << '*';
        for (int m = 1; m < i; m++)
            cout << ' ';
        for (int n = 1; n < i; n++)
            cout << ' ';
        for (int o = 10; o >= i; o--)
            cout << '*';
        for (int p = 10; p > i; p--)
            cout << ' ';
        for (int q = 1; q <= i; q++)
            cout << '*';
        cout << endl;
    }
    return 0;
}