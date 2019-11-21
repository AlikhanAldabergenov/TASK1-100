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
		if (b>c) {
			if (c>d) {
				if (d>e) {
					cout<<a<<"-yes";
				}
				else {
					cout<<a<<"-no";
				}
			}
			else {
				cout<<a<<"-no";
			}			
		}
		else {
			cout<<a<<"-no";
		}
	}
	return 0;
}

