#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");
    float x, y;
    cout << "請輸入第一個數:";
    cin >> x ;
    cout << "請輸入第二個數:";
    cin >> y ;
    cout << "兩數之和為: " << x + y << endl;
    cout << "兩數之積為: " << x * y << endl;
    cout << "兩數之差為: " << x - y << endl;
    cout << "兩數相除為: " << x / y << endl;
    return 0;
}