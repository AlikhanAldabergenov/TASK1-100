#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	if (a>b) {
		cout<<"yes";
	}
	else {
		int c;
		c=a;
		a=b;
		b=c;
		cout<<"a:"<<a<<"b:"<<b;
	}
	return 0;
}
