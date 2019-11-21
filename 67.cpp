#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c,d,n,mn,mx;
	cin>>n;
	a = n/1000;
	b = n%1000/100;
	c = n%100/10;
	d = n%10;
	mx = a;
	mn = a;
	int mni = 0, mxi=0;
	int arr[4] = {a,b,c,d};
	for(int i = 0; i<4; i++){
		if(mn>arr[i]){
			mn = arr[i];
			mni = i;
		}
		if(mx<arr[i]){
			mx = arr[i];
			mxi = i;
		}
	}
	swap(arr[mni], arr[mxi]);
	for(int i = 0; i<4; i++){
		cout<<arr[i];
	}
}
