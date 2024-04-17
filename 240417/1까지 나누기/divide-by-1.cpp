#include <iostream>
using namespace std;

int main() {
    
    int n, cnt = 0;

    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n <= 1)
            break;
        n /= i;
        cnt++;
    }

    cout << cnt;

    return 0;
}