#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	double h,m,a;
	cin>>h>>m;
	a=(m*6)-((h*60+m)*0.5);
	if (a<0) {
		a=360+a;
	}
	cout<<a;
	return 0;
}
