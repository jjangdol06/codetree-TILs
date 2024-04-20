#include <iostream>
using namespace std;

int main() {

    while(1){
        int w, h;
        char c;

        cin >> w >> h >> c;

        cout << w * h << endl;

        if(c == 'C')
            break;
    }
    
    return 0;
}