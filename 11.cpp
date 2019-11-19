#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	double x,y;
	cin>>x;
	y=(abs(x-5)-sin(x))/3+sqrt(pow(x,2)+2014)*cos(2*x)-3;
	cout<<y;
	return 0;
}
