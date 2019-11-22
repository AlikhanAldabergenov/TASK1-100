#include<iostream>
using namespace std;
int main()
{
 
    for (int i=100; i<1000; i++)
      {
        int a = i, p=0;
        while (a>9)
          {
            int z = a%10;
            a = a/10;
            p += z*z*z;
          }
        p +=a*a*a;
        if (p == i) cout << i << endl;
      }
 
    return 0;
}
