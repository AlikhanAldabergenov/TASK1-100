#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin>>a>>b>>c;
	if(a%5==0 && b%5==0 && c%5==0){
		cout<<a+b+c;
	}
	if(a%5==0 && b%5==0 && c%5!=0){
		cout<<a+b;
	}
	if(a%5==0 && b%5!=0 && c%5==0){
		cout<<a+c;
	}
	if(a%5!=0 && b%5==0 && c%5==0){
		cout<<b+c;
	}
	if(a%5==0 && b%5!=0 && c%5!=0){
		cout<<a;
	}
	if(a%5!=0 && b%5==0 && c%5!=0){
		cout<<b;
	}
	if(a%5!=0 && b%5!=0 && c%5==0){
		cout<<c;
	}
	if(a%5!=0 && b%5!=0 && c%5!=0){
		cout<<"error";
	}
	return 0;
}
