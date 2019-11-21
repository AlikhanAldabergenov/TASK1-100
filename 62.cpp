# include <iostream>
# include <cmath> 
using namespace std;
int main() {
	int a;
	int b,c,d,e,f;
	cin>>a;
	if (a>=10000 && a<=99999) {
		b=a/10000;
		c=a%10000/1000;
		d=a%1000/100;
		e=a%100/10;
		f=a%10;
		c=0;
		e=0;
		cout<<b<<c<<d<<e<<f;
	}
	return 0;
}
