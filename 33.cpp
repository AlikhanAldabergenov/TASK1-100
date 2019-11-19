#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	double a,x,y;
	cin>>x>>y;
	if (x>=0 && y>=0 && x-sqrt(y)>=0) {
		a=sqrt(x-sqrt(y));
		cout<<a;
	}
	else {
		cout<<"No square";
	}
	return 0;
}
