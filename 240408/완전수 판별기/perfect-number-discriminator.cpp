#include <iostream>
using namespace std;

int main() {

    int a, sum = 0;

    for (int i = 1; i < a / 2; i++) {
		if (a % i == 0) 
			sum += i;
	}

    if(a == sum)
        cout << 'P';
    else
        cout << 'N';

    return 0;
}