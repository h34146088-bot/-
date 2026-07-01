#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    // Declare a 2D array to store sales data (5 products x 4 salespersons)
    int sales[5][4] = {};

    // Input loop: collect sales values from user
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "Please enter the sales value for product" << i + 1 << " sold by salesperson" << j + 1 << " : ";
            cin >> sales[i][j];
        }
    }

    // Print header row with salesperson labels
    for(int i = 1; i < 5; i++) {
        if(i == 1) {
            cout << setw(30) << "salesperson" << i;
        } else {
            cout << setw(15) << "salesperson" << i;
        }
    }
    cout << setw(18) << "Product Totals" << endl;

    // Print sales data by product with row totals
    for(int i = 0; i < 5; i++) {
        int total = 0;
        cout << setw(7) << "product" << setw(1) << i + 1;
        for(int j = 0; j < 4; j++) {
            if(j == 0) {
                cout << setw(23) << sales[i][j];
                total += sales[i][j];
            } else {
                cout << setw(16) << sales[i][j];
                total += sales[i][j];
            }
        }
        cout << setw(18) << total;
        cout << endl;
    }

    // Calculate and print salesperson totals (column sums)
    cout << "Salesperson Totals";
    int count = 0;
    for(int i = 0; i < 4; i++) {
        count++;
        int total = 0;
        for(int j = 0; j < 5; j++) {
            total += sales[j][i];
        }
        if(count == 1) {
            cout << setw(13) << total;
        } else {
            cout << setw(16) << total;
        }
    }

    // Calculate grand total of all sales
    int total = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            total += sales[i][j];
        }
    }
    cout << setw(18) << total;
}