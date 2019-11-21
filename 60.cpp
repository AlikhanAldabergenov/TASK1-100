# include <iostream>
# include <cmath> 
using namespace std;
int main() {
	int a;
	int b,c,d;
	cin>>a;
	if (a>=100 && a<=999) {
		b=a/100;
		c=a%100/10;
		d=a%10;
		cout<<d<<c<<b;
	}
	return 0;
}
