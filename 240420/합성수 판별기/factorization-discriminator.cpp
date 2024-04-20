#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cout << 'C';
            break;
        }

        if(n - 1 == i)
            cout << 'N';
    }

    return 0;
}