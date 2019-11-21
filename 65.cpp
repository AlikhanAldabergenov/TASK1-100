#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c,d,n;
	cin>>n;
	a = n/1000;
	b = n%1000/100;
	c = n%100/10;
	d = n%10;
	int arr[4] = {a,b,c,d};
	for(int i = 0; i<4; i++){
		if(arr[i]<5){
			cout<<arr[i];
		}
	}
	for(int i = 0; i<4; i++){
		if(arr[i]>=5){
			cout<<arr[i]<<" ";
		}
	}
	
}
