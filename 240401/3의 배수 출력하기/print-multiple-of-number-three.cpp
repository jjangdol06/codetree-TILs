#include <iostream>
using namespace std;

int main() {

    int n, i = 0;
    
    cin >> n;

    while(i < n){
        i += 3;
        cout << i << ' ';
    }

    return 0;
}