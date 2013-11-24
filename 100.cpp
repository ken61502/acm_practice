#include <iostream>

using namespace std;

int main () {

	unsigned int i, j;
	
	while(cin >> i >> j) {
		unsigned int max = 0;

		cout << i << " " << j << " ";

		if(i > j) {
			int temp = j;
			j = i;
			i = temp;
		}
		
		for(unsigned int k = i; k <= j; k++) {
			unsigned int counter = 1, n = k;
			//cerr << n << " ";
			while(n != 1) {
				if(n % 2 == 1) {
					n = 3*n + 1;
				}
				else {
					n = n/2;
				}
				counter++;
			}
			if(counter > max) {
				max = counter;
			}
		}
		cout << max << endl;
	}
	return 0;
}