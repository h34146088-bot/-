#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double value = 0;
  /*
  Print the column headers. The loop repeats the header 10 times, so there
  are 10 columns in the table.
  */
  for(int i = 1; i <= 10; i++) {
    cout << setw(4) << "term" << setw(10) << "value" << "|";
  }
  cout << endl;
  /*
  denom is the odd denominator (1,3,5,...) and term is the term index (1..)
  We compute up to 1000 terms. For each term, add or subtract 4.0/denom
  depending on whether the term index is odd or even.
  */
  for(int denom = 1, term = 1; term <= 1000; term++, denom += 2) {
    if(term % 2 == 0) {
      value = value - 4.0 / denom;
    } else {
      value = value + 4.0 / denom;
    }
    cout << setw(4) << term << setw(10) << fixed << setprecision(5) << value
         << "|";
    // Every 10 terms print a newline.
    if(term % 10 == 0) {
      cout << endl;
    }
  }
  return 0;
}