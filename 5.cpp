#include <iostream>
using namespace std;
int main(){
  for(int i=0; i<4; i++){
  	if(i==0){
  		cout<<"*"<<"     "<<"*"<<"     "<<"*";
	  }
	if(i==1){
  		cout<<" *"<<"   "<<"*"<<" "<<"*"<<"   "<<"*";
	  }
	if(i==2){
  		cout<<"  *"<<" "<<"*"<<"   "<<"*"<<" "<<"*";
	  }
	if(i==3){
		cout<<"   *"<<"     "<<"*";
	}
	cout<<endl;
  }
  return 0;
 }
