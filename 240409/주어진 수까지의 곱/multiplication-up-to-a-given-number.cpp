#include <iostream>
using namespace std;

int main() {

    int a, b, res = 1;

    cin >> a >> b;

    for(int i = a; i <= b; i++){
        res *= i;
    }

    cout << res;
    
    return 0;
}