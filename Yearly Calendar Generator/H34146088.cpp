#include <iomanip>
#include <iostream>
using namespace std;

bool isLeapYear(int);
int GetWeekday(int, int, int);

int main() {
    int year, dayWidth = 2, counter = 1, calendar[12][31];
    string monthNames[13] = {"/", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string weekNames[7] = {"Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"};
    int days[13] = {};
    // ANSI color codes for output formatting
    const string RED = "\033[31m";
    const string BLUE = "\033[34m";
    const string RESET = "\033[0m";

    cout << "Please enter the year of calendar: ";
    cin >> year;

    // Adjust February for leap years
    if(isLeapYear(year)) {
        monthDays[2] = 29;
    }

    // Fill calendar array: calculate weekday for each date
    for(int i = 0; i < 12; i++) {                            // For each month (0-11)
        for(int j = 0; j < monthDays[i + 1]; j++) {          // For each day in the month
            calendar[i][j] = GetWeekday(year, i + 1, j + 1); // Store the weekday (0=Sun, 6=Sat)
        }
    }

    // Print year title
    cout << setw(35) << RED << year << RESET << endl;

    // Main loop: print 3 months at a time (4 iterations total)
    while(counter < 13) {
        // Print month titles (3 months)
        for(int i = counter; i < counter + 3; i++) {
            int leftpadding = (20 - monthNames[i].length()) / 2; // Calculate left padding to center text
            cout << setw(leftpadding) << " ";
            cout << BLUE << monthNames[i] << RESET;
            cout << setw(20 - leftpadding - monthNames[i].length()) << " "; // Right padding
            cout << "  ";                                                   // Spacing between months
        }
        cout << endl;

        // Print weekday headers (Su Mo Tu We Th Fr Sa) for 3 months
        for(int i = 0; i < 3; i++) {     // For each of the 3 months
            for(int j = 0; j < 7; j++) { // For each weekday
                cout << left << setw(dayWidth) << weekNames[j];
                cout << " ";
            }
            cout << " "; // Spacing between months
        }
        cout << endl;
        cout << right;

        // Print dates (up to 6 rows per month)
        for(int i = 0; i < 6; i++) {                                 // Each month needs at most 6 rows (weeks)
            for(int month = counter; month < counter + 3; month++) { // For each of the 3 months
                if(i == 0) {                                         // First row: handle leading spaces and first week
                    // Print leading spaces based on what weekday the 1st falls on
                    for(int b = 0; b < calendar[month - 1][0]; b++) {
                        cout << setw(dayWidth) << " ";
                        cout << " ";
                    }
                    // Print dates for the first week
                    for(int j = 1; j <= 7 - calendar[month - 1][0]; j++) {
                        cout << setw(dayWidth) << j;
                        days[month]++;
                        cout << " ";
                    }
                } else if(monthDays[month] - days[month] < 7) { // Last row: remaining days less than a full week
                    int printed = 0;
                    // Print remaining dates
                    for(int j = days[month] + 1; days[month] < monthDays[month];) {
                        cout << setw(dayWidth) << j << " ";
                        printed++;
                        days[month]++;
                        j = days[month] + 1;
                    }
                    // Fill remaining spaces to align with other months
                    for(int b = 0; b < 7 - printed; b++) {
                        cout << setw(dayWidth) << " ";
                        cout << " ";
                    }
                } else { // Normal row: print a complete week (7 days)
                    for(int j = days[month] + 1, k = 0; k < 7; k++) {
                        cout << setw(dayWidth) << j << " ";
                        days[month]++;
                        j = days[month] + 1;
                    }
                }
                cout << " "; // Spacing between months
            }
            cout << endl;
        }
        counter += 3; // Move to next group of 3 months
        cout << endl
             << endl; // Two blank lines between groups
    }
}

bool isLeapYear(int year) {
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

// Returns: 0=Sunday, 1=Monday, ..., 6=Saturday
int GetWeekday(int year, int month, int day) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if(month < 3) {
        year--;
    }
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}