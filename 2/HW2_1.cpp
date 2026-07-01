#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3, num4, num5;
    int largest, smallest;
    cout << "Please enter five integers" << endl;
    cout << "number1: " ; 
    cin >> num1 ;
    cout << "number2: " ; 
    cin >> num2 ;
    cout << "number3: " ; 
    cin >> num3 ;
    cout << "number4: " ; 
    cin >> num4 ;
    cout << "number5: " ; 
    cin >> num5 ;
    //計算最大值
    largest = num1;
    if (num2 > largest) largest = num2;
    if (num3 > largest) largest = num3;
    if (num4 > largest) largest = num4;
    if (num5 > largest) largest = num5;
    //計算最小值
    smallest = num1;
    if (num2 < smallest) smallest = num2;
    if (num3 < smallest) smallest = num3;
    if (num4 < smallest) smallest = num4;
    if (num5 < smallest) smallest = num5;
    
    cout << "The largest integer is " << largest << endl;
    cout << "The smallest integer is " << smallest << endl;
    return 0;
}