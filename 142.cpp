#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main() {
    srand(time(NULL));
    int n,u,i;
    n = rand() % 100;
    i = 1;
    while (i<=3) {
        cin>>u;
        if (u < n) cout<<"Less\n";
        else
            if (u > n) cout<<"Greater\n";
            else {
                cout<<"Found\n";
                break;
            }
        i++;
    }
    if (i == 4)
        cout<<"Not found\n"<<"Random number was: "<<n;
}
