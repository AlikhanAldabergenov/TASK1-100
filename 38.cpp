#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	if (abs(a-b)==100) {
		cout<<"yes";
	}
	else {
		cout<<"no";
	}
	return 0;
}
