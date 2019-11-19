#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b, s, p, h;
	cin>>a>>b;
	s = (a*b)*0.5;
	h = sqrt(a*a+b*b);
	p = a + b + h;
	cout<<s<<" "<<p<<" "<<h;
	return 0;
}
