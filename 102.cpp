#include<iostream>
using namespace std;
int main(){
	for(int a=1000;a<9999;a++){
	
    int k,l,m,n;
    
    k=a/1000;
    l=(a%1000)/100;
    m=(a%100)/10;
    n=a%10;
    if ((k==3)||(l==3)||(n==3)||(m==3))
    {
        cout<<a<<endl;
    }

        
    }
}

