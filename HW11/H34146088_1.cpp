#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int salespeople = 0;
    int grossSales = 0;
    int counters[11] = {};
    while(true) {
        int salaries = 0;
        salespeople++;
        cout << "Please enter the gross sales of salesperson id " << salespeople << " or -1 to terminate input: ";
        cin >> grossSales;
        if(grossSales == -1) {
            break;
        }
        salaries = static_cast<int>(200 + grossSales * 0.09);
        if(salaries > 1000) {
            counters[10]++;
        } else {
            counters[(salaries / 100)]++;
        }
    }
    cout << "Salary distribution (number of salespeople per range):" << endl;
    for(int i = 2; i <= 10; i++) {
        if(i < 10) {
            cout << "$" << i * 100 << "-" << i * 100 + 99 << ":" << counters[i] << endl;
        } else {
            cout << "$1000 and over" << ":" << counters[10] << endl;
        }
    }
}