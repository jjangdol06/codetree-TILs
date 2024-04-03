#include <iostream>
using namespace std;

int main() {

    int n, cnt_class = 0, cnt_hall = 0, cnt_bathroom = 0;

    cin >> n;

    for(int i = 1; i < n; i++){
        if(i % 12 == 0)
            cnt_bathroom++;
        else if(i % 6 == 0)
            cnt_hall++;
        else if(i % 3 == 0)
            cnt_hall++;
        else if(i % 2 == 0)
            cnt_class++;
    }

    cout << cnt_class << ' ' << cnt_hall << ' ' << cnt_bathroom;

    return 0;
}