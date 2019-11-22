#include<iostream>
using namespace std;
int main(){
	for(int a=1000;a<9999;a++){
	
    int k,l,m,n,g;
    
    k=a/1000;
    l=(a%1000)/100;
    m=(a%100)/10;
    n=a%10;
    g=(k+l+m+n)*600;
    if (a>g)
    {
        cout<<a<<endl;
    }

        
    }
}

