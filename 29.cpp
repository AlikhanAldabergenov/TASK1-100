#include <iostream>
using namespace std;
int main(){
	double a, b;
	cin>>a>>b;
	b = a + b;
	a = b - a;
	b = b - a;
	cout<<a<<" "<<b;
	return 0;
}
