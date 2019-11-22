#include<iostream>
using namespace std;
int main(){
 for(int a=10000;a<20000;a++){
 
 int q,w,e,r,t,k=0;
 q=a/10000;
 w=(a/1000)%10;
 e=(a/100)%10;
 r=(a%100)/10;
 t=a%10;
 int v=q+w+e+r+t;
 if((a%2==0)&&(e%2==1)&&(v%4==0))
{
	cout<<a;
}
}
}
