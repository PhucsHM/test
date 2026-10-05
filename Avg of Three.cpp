#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    double average = sum/3.0;
    cout << sum << " " << fixed << setprecision(2) << average;
    return 0;
}