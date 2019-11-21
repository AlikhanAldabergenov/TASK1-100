#include <iostream>
using namespace std;
int main(){
	double s=0;
	for(double i = 2.0; i<=9.0;i++){
		s = s + i/(i+1.0);
	}
	cout<<s;
}
