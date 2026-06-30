#include <iostream>
using namespace std;

int main() {
    int i = 0;
    cout << "N\t" << "10*N\t" << "100*N\t" << "1000*N" <<endl;
    while (i < 5){
        i++;
        cout << i << "\t" << 10*i << "\t" << 100*i << "\t" << 1000*i << endl;
    }
    return 0;
}