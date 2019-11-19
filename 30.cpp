#include <iostream>
using namespace std;
int main(){
	int a, n, s=1;
	cin>>a>>n;
	if(n%2==0){
		for(int i = 0; i<0.5*n; i++){
			s = s * a*a;
			cout<<s<<endl;
		}
	}
	if(n%2==1){
		for(int i = 0; i<n/3; i++){
			s = s * a*a*a;
			cout<<s<<endl;
		}
	}
	return 0;
}
