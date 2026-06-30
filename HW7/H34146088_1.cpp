#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double calculateCharges(double);

int main() {
    double car1, car2, car3;
    cout << "Please enter the hours parked for three customers: ";
    cin >> car1 >> car2 >> car3;
    cout << setw(3) << "Car" << setw(8) << "Hours" << setw(9) << "Charge" << endl;
    cout << setw(1) << 1 << fixed << setprecision(1) << setw(10) << car1
         << fixed << setprecision(2) << setw(9) << calculateCharges(car1) << endl;
    cout << setw(1) << 2 << fixed << setprecision(1) << setw(10) << car2
         << fixed << setprecision(2) << setw(9) << calculateCharges(car2) << endl;
    cout << setw(1) << 3 << fixed << setprecision(1) << setw(10) << car3
         << fixed << setprecision(2) << setw(9) << calculateCharges(car3) << endl;
    cout << setw(5) << "TOTAL" << fixed << setprecision(1) << setw(6) << car1 + car2 + car3
         << fixed << setprecision(2) << setw(9) << calculateCharges(car1) + calculateCharges(car2) + calculateCharges(car3) << endl;
    return 0;
}

double calculateCharges(double hours) {
    // If parked 3 hours or less, flat rate of 2.00
    if(hours <= 3) {
        return 2.00;
        // For time > 3 hours: charge 0.5 per hour or part thereof beyond 3 hours,
        // but do not exceed the maximum daily charge of 10.00
    } else if((2.00 + (ceil(hours - 3.00) * 0.5)) >= 10) {
        return 10.00;
    } else {
        // Use ceil to round up any fractional part of an hour to the next whole hour
        return 2.00 + (ceil(hours - 3.00) * 0.5);
    }
}