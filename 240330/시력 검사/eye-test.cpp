#include <iostream>
using namespace std;

int main() {

    double l, r;

    cin >> l >> r;

    if(l >= 1 && r >= 1)
        cout << "High";
    else if(l >= 0.5 && r >= 0.5)
        cout << "Middle";
    else
        cout << "Low";

    return 0;
}