#include <iostream>
using namespace std;

int main() {

    int h, w, bmi;

    cin >> h >> w;
    
    bmi = 10000 * w / (h * h);

    cout << bmi << endl;

    if(bmi >= 25)
        cout << "Obesity";

    return 0;
}