#include <iostream>
using namespace std;

int main() {

    int n, res = 1;

    cin >> n;

    for(int i = 1; i <= 10; i++){
        res *= i;
        if(res >= n){
            cout << i;
            break;
        }
    }
    
    return 0;
}