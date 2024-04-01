#include <iostream>
using namespace std;

int main() {

    int a, b, temp;

    cin >> a >> b;

    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }

    for(int i = b; i >= a; i--){
        cout << i << ' ';
    }

    return 0;
}