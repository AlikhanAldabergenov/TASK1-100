#include <iostream>
using namespace std;
int main(){
	double a, b, c, d, max;
	cin>>a>>b>>c>>d;
	if(a==b && b==c && c==d){
		cout<<"not found";
	}
	else{
	
	max = a>b?
				a>c?
					a>d?
						a
						:d
					:c>d?
						c
						:d
				:b>c?
					b>d?
						b
						:d
					:c>d?
						c
						:d;
	cout<<max; 
	}
	return 0;
}
