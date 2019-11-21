# include <iostream>
# include <cmath> 
using namespace std;
int main () 
{
  int D;
  int M;
  int Y;
  cin>>D>>M>>Y;
  switch (M)
    {
    	case 1:
        case 3: 
        case 5:
        case 7:
        case 8: 
        case 10: 
        case 12:
            if (D >= 1 && D <= 31 )
                cout<<"yes";
            else
                cout<<"no";
                break;
        case 2:
            if (D >= 1 && D <= 28 )
                cout<<"yes";
            	else
                cout<<"no";
            	break;
        case 4: 
        case 6: 
        case 9:
        case 11: 
            if (D >= 1 && D <= 30 )
                cout<<"yes";
            	else
                cout<<"no";
                break;
                default:
                cout<<"no";
            	break;
                                       
    }                           
 return 0;
}
