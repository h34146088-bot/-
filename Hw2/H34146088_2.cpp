#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Please enter a five-digit integer: ";
    cin >> num;

    while (num < 10000 || num > 99999) {
        cout << "Invalid input. Please enter a five-digit integer: ";
        cin >> num; 
    }
    //use devision and modulus to get each digit
    int digit1 = num/10000;
    int digit2 = (num/1000)%10;
    int digit3 = (num/100)%10;
    int digit4 = (num/10)%10;
    int digit5 = num%10;

    cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5 << endl;
    return 0;
}