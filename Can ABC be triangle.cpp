#include <iostream>
using namespace std;
int main () {
    double a, b, c;
    cin >> a >> b >> c;
    double one = a+b;
    double two = b+c;
    double three = a+c;
    if (one > c && two > a && three > b) {
        cout << "abc can be a triangle";
    }
    else {
        cout << "abc can not be a triangle";
    }
    return 0;
}