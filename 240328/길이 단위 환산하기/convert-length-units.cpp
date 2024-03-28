#include <iostream>
using namespace std;

int main() {
    double ft = 30.48;
    double a;
    cin >> a;

    cout << fixed;
    cout.precision(1);
    cout << a * ft;

    return 0;
}