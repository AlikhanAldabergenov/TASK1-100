#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	double x,y,b,a;
	cin>>a>>b>>x;
	y=pow(x*x+b,0.2)-(b*b*pow(sin(x+a),3))/x;
	cout<<y;
	return 0;
}
