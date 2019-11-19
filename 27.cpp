#include <iostream>
using namespace std;
int main(){
	double a, b, c;
	cin>>a>>b>>c;
	double temp1, temp2, temp3;
	temp1 = a + b;
	temp2 = c -a;
	temp3 = a + b + c;
	a = temp1;
	b = temp2;
	c = temp3;
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}
