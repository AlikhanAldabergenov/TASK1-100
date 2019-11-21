#include <iostream>
using namespace std;
int DMY(int i)
{
    if(i==1)
        cout << "Yes"<<endl;
    else
        cout << "No"<<endl;
    return 0;
} 
int main()
{
    int d,m,g,D,M,G; 
	cin>>d>>m>>g;
	cin>>D>>M>>G;   
    if(G>g)
        msg(1);
    if(G<g)
        msg(0);
    if(G==g)
    { 
        if(M>m) DMY(1);
        if(M<m) DMY(0);
            if(M==m)
            {  
                if(D>d) DMY(1);
                if(D<=d) DMY(0);
            } 
    } 
}

