#include <iostream>
using namespace std;

int main() {

    int cnt = 0;
    double sum = 0;

    while(1){
        int age;
        cin >> age;
        
        if(age % 10 != 2){
            cout << fixed;
            cout.precision(2);
            cout << sum / cnt;
            break;
        }

        sum += age;
        cnt++;
    }

    return 0;
}