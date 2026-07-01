#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double sales;
    const double rate = 0.09;
    const double base = 200;
    cout << "Enter sales in dollars (-1 to end): ";
    cin >> sales;

    cout <<  setprecision(2) << fixed;//設定cout浮點數格式顯示到小數點後2位
    while (sales != -1){
        cout << "Salary is: $" << sales*rate + base << endl << endl;
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;
    }

    return 0;
}
