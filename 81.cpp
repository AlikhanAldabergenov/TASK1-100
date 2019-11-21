#include <iostream>
using namespace std;
int main(){
	for(int i = 0; i<25; i++){
		if(i<24) cout<<100-4*i<<", ";
		else cout<<100-4*i<<".";
	}
}
