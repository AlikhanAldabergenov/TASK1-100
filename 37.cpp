#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	int a,b,max;
	cin>>a>>b;
	max = a>=b?a:b;
	cout<<max;
	return 0;
}
