#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	int a;
	cin>>a;
	if (a<-100 || a>100) {
		cout<<"0";
	}
	else {
		cout<<a+1;
	}
	return 0;
}
