#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main() {
    srand(time(NULL));
    int n;
    for (int i=0;i<3;i++) {
		if (n[i]==n[i+1]) {
			n = rand() % 100;
		cout<<n<<" ";
		}
		else {
			n = rand() % 100;
			cout<<n<<" ";
		}
	}
	return 0;
}
