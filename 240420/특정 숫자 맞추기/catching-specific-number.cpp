#include <iostream>
using namespace std;

int main() {

    while(1){
        int n;
        cin >> n;

        if(n < 25)
            cout << "Higher" <<endl;
        else if(n == 25){
            cout << "Good" <<endl;
            break;
        }
        else
            cout << "Lower" <<endl;
    }

    return 0;
}