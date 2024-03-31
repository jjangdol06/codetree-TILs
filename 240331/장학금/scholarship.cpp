#include <iostream>
using namespace std;

int main() {

    int mid_score, final_score;

    cin >> mid_score, final_score;

    if(mid_score < 90)
        cout << 0;
    else if(final_score >= 95)
        cout << 10;
    else if(final_score >= 90)
        cout << 5;
    else
        cout << 0;
        
    return 0;
}