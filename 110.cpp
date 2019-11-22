#include <iostream>
using namespace std;
int main () {
    int n,m;
    cin>>n>>m;
   for(int i=0; i<n; i++){
       if(i%2==0){
             for(int j=0; j<m; j++){
                 cout<<"AAA"<<"BBB";
        }
       }
   else {
        for(int j=0; j<m; j++){
            cout<<"BBB"<<"AAA";
        }
   }
       cout<<endl;
   }
return 0;
}
