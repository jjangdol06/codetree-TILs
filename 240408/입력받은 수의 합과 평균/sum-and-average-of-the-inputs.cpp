#include <iostream>
using namespace std;

int main() {

    int n, a, sum = 0;
    double avg;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        sum += a;
    }

    avg = (double) sum / n;

    cout << sum << ' ';
    cout << fixed;
    cout.precision(1);
    cout << avg;

    return 0;
}