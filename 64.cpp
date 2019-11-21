# include <iostream>
# include <cmath> 
using namespace std;
int main() {
	int a;
	int b,c,d,e;
	cin>>a;
	if (a>=1000 && a<=9999) {
		b=a/1000;
		c=a%1000/100;
		d=a%100/10;
		e=a%10;
		if (b==e && c==d) {
			cout<<"yes";
		}
		else {
			cout<<"no";
		}
	}
	return 0;
}
