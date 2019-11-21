#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x1,x2,y1,y2,d1,d2,d3,d4,x3,y3;
	cin>>x1>>y1>>d1>>d2>>x2>>y2>>d3>>d4;
	int s1,s2;
	s1=d1*d2;
	s2=d3*d4;
	if(s1>=s2){
		x3 = x2 + d3;
		y3 = y2 + d4;
		cout<< x2 <<" "<<y2<<" "<<x3<<" "<<y3;
	}
	if(s1<s2){
		x3 = x1 + d1;
		y3 = y1 + d2;
		cout<< x1 <<" "<<y1<<" "<<x3<<" "<<y3;
	}
}
