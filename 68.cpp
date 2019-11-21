#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	double a,b,c,d,x2,x1;
	cin>>a>>b>>c;
	d=pow(b,2)-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	cout<<x1<<" "<<x2;
	return 0;
}
