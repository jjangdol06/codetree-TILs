#include <iostream>
using namespace std;

int main() {

    int temp, cnt = 0;
    char symptom, ans;

    cin >> symptom >> temp;
    cin >> symptom >> temp;
    cin >> symptom >> temp;


    for(int i = 0; i < 3; i++){
        if(temp >= 37)
        {
            if(symptom == 'Y'){
                cnt++;
            }
            // else
                // cout << 'B';
        }
        
        // else{
        //     if(symptom == 'Y')
        //         // cout << 'C';
        //     else
        //         // cout << 'D';
        // }
    }

    ans = (cnt >= 2) ? 'E' : 'N';

    cout << ans;

    return 0;
}