#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	int a;
	cin>>a;
	if (a>=2 && a<=5) {
		cout<<a+10;
	}
	else if (a>=7 && a<=40) {
		cout<<a-100;
	}
	else if  (a>=3000 || a<=0) {
		cout<<a*3;
	}
	else {
		cout<<"0";
	}
	return 0;
}
