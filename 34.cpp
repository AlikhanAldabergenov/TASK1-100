#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	double x;
	cin>>x;
	if (x>3) {
		x=x+10;
		cout<<x;
	}
	else {
		x=x-10;
		cout<<x;
	}
	return 0;
}
