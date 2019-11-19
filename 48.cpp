#include <iostream>
using namespace std;
int main(){
	double a, b, c, max;
	cin>>a>>b>>c;
	if(a+b>a+c && a+b>b+c){
		cout<<a<<" "<<b;
	}
	if(a+b<a+c && a+c>b+c){
		cout<<a<<" "<<c;
	}
	if(a+c<b+c && a+b<b+c){
		cout<<b<<" "<<c;
	}
	return 0;
}
