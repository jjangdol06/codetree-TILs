#include <iostream>
#include <string>
using namespace std;

int main() {
    int weight = 13;
    double ratio = 0.165000;
    double result = weight * ratio;

    cout << fixed;
    cout.precision(6);
    cout << weight << " * " << ratio << " = " << result;

    return 0;
}