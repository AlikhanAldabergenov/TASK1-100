#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double s=0;
	for(double i = 2.0; i<=56.0;i++){
		s = s + cos((2*i-1)/(2*i+1));
	}
	cout<<s;
}
