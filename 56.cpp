# include <iostream>
# include <cmath> 
using namespace std;
int main () 
{
  int S;
  int N;
  cin >>N;
  cin >>S; 
  switch (N) {
    case 1: switch (S) {
   		case 11: cout <<"Sever"; break;
   		case 12: cout <<"Zapad"; break;  
   		case 13: cout <<"Yg"; break;
   		case 14: cout <<"Vostok"; break;
    } break ;
	case -1: switch (S) {
   		case 11: cout <<"Sever"; break;
   		case 12: cout <<"Zapad"; break;  
   		case 13: cout <<"Yg"; break;
   	    case 14: cout <<"Vostok"; break;
	} break;
	case 0: switch (S) {
   		case 11: cout <<"Sever"; break;
   		case 12: cout <<"Zapad"; break;  
   		case 13: cout <<"Yg"; break;
   	    case 14: cout <<"Vostok"; break;
	} break;
   }
   cout << endl; 
   return 0;
}
