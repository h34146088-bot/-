#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int productNum;
  int quantity;
  double sales = 0;
  double total = 0;

  cout << "Please enter the product number or -1 to exit: ";
  cin >> productNum;

  while(productNum != -1) {
    switch(productNum) {
    case 1:
      cout << "Please enter the quantity sold of product " << productNum
           << ": ";
      cin >> quantity;
      sales = 2.98 * quantity;
      total += sales;
      break;
    case 2:
      cout << "Please enter the quantity sold of product " << productNum
           << ": ";
      cin >> quantity;
      sales = 4.50 * quantity;
      total += sales;
      break;
    case 3:
      cout << "Please enter the quantity sold of product " << productNum
           << ": ";
      cin >> quantity;
      sales = 9.98 * quantity;
      total += sales;
      break;
    case 4:
      cout << "Please enter the quantity sold of product " << productNum
           << ": ";
      cin >> quantity;
      sales = 4.49 * quantity;
      total += sales;
      break;
    case 5:
      cout << "Please enter the quantity sold of product " << productNum
           << ": ";
      cin >> quantity;
      sales = 6.87 * quantity;
      total += sales;
      break;
    default:
      cout << "Invalid number. Please enter again." << endl;
      break;
    }
    cout << "Please enter the product number or -1 to exit: ";
    cin >> productNum;
  }
  cout << "The total retail value of all products sold is : ";
  cout << fixed << setprecision(2) << "$" << total;
  return 0;
}