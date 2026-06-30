#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double miles, gallons, MPG, total_MPG;
    double total_miles = 0;
    double total_gallons = 0;
    cout << "Enter miles driven (-1 to quit): ";
    cin >> miles;

    cout <<  setprecision(6) << fixed;//設定cout浮點數格式顯示到小數點後6位
    while(miles != -1){
        cout << "Enter gallons used: ";
        cin >> gallons;
        total_miles += miles;
        total_gallons += gallons;
        cout << "MPG this tankful: " << miles / gallons << endl;
        cout << "Total MPG: " << total_miles / total_gallons << endl << endl;
        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles;
    }

    return 0;
}