#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	double a,b,c,s,p;
	cin>>a>>b>>c;
	if (a+b>c && a+c>b && b+c>a) {
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<s;
	}
	else {
		cout<<"Not triangle";
	}
	return 0;
}
