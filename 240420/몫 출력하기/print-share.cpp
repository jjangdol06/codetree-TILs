#include <iostream>
using namespace std;

int main() {

    int cnt = 0;

    while(cnt < 3){
        int n;
        cin >> n;

        if(n % 2 == 1)
            continue;
        else{
            cout << n / 2 << endl;
            cnt++;
        }
    }
    return 0;
}