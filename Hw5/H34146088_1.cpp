#include <iostream>
using namespace std;

int main() {
  int numValues;
  int num, smallest;
  cout << "Please enter the number of values remaining: ";
  cin >> numValues;
  cout << "Please enter the integer1: ";
  cin >> num;
  // Treat the first entered integer as the smallest number.
  smallest = num; 

  for(int i = 1; i < numValues; i++) {
    cout << "Please enter the integer" << i + 1 << ": ";
    cin >> num;
    // If the newly entered integer is smaller than the current smallest, set it as the new smallest.
    if(num < smallest) { 
      smallest = num;
    }
  }
  cout << "The smallest integer is: " << smallest;
  return 0;
}