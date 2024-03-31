#include <iostream>
using namespace std;

int main() {

    int a, b, c, min;

    cin >> a >> b >> c;

    min = a;
    if(min > b)
        min = b;
    if(min > c)
        min = c;
    
    if(a == min)
        cout << 1 << ' ';
    else 
        cout << 0 << ' ';

    if(a == b && b == c)
        cout << 1;
    else 
        cout << 0;

    return 0;
}