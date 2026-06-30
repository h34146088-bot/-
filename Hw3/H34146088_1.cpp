#include <iostream>
using namespace std;

int main() {
    int counter = 1;
    int number, largest;
    cout << "Please enter 10 numbers." << endl;
    cout << "Enter number" << counter << ": ";
    cin >> number;
    largest = number;//將largest初始值設定為第一個輸入的數字

    while (counter < 10){
        counter++;
        cout << "Enter number" << counter << ": ";
        cin >> number;
        //若新的數字大於largest，則更新largest的值
        if (number > largest){
            largest = number;
        }
    }

    cout << "The largest number of the 10 numbers is: " << largest << endl;
    return 0;
}