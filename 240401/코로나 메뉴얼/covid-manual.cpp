#include <iostream>
using namespace std;

int main() {

    int temp, cnt = 0;
    char symptom, ans;

    for(int i = 0; i < 3; i++){
        cin >> symptom >> temp;
        if(temp >= 37 && symptom == 'Y')
            cnt++;
    }

    ans = (cnt >= 2) ? 'E' : 'N';

    cout << ans;

    return 0;
}