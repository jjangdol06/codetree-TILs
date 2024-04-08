#include <iostream>
using namespace std;

int main() {

    int n, sum = 0;
    double avg;

    for(int i = 0; i < 10; i++){
        if(i >= 0 && i <= 200){
            cin >> n;
            sum += n;
        }
    }

    avg = sum / 10;

    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg;

    return 0;
}