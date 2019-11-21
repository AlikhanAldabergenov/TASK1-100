#include <iostream>
using namespace std;
int main(){
	int a, n;
	double s=1;
	cin>>a>>n;
	for(int i = 1; i<=n;i++){
		s = s * (a+i)*(a+i);
	}
	cout<<s;
}
