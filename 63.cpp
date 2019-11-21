# include <iostream>
# include <cmath> 
using namespace std;
int main() {
	int x,y;
	int b,c,d,b2,c2,d2;
	cin>>x>>y;
	if (x>=100 && x<=999) {
		if (y>=100 && y<=999) {
			cout<<x<<y;
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
