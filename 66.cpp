# include <iostream>
# include <cmath> 
using namespace std;
int main() {
	int x,y;
	int b,c,d,b1,c1,d1;
	cin>>x>>y;
	if (x>=100 && x<=999) {
		if (y>=100 && y<=999) {
			b=x/100;
			c=x%100/10;
			d=x%10;
			b1=y/100;
			c1=y%100/10;
			d1=y%10;
			cout<<b<<c<<b1<<c1;				
		}
		else {
			cout<<"Not three-digit number";
		}		
	}
	else {
		cout<<"Not three-digit number";
	}	
	return 0;
}
