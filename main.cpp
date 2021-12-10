#include <iostream>
#include "lib.h"
using namespace std;
int main() {

    char a[10][20];
    char b[20];

    cin>>a[0];
    cin>>a[1];
    cin>>a[2];
    cin>>a[3];
    cin>>a[4];
    cin>>a[5];
    cin>>a[6];
    cin>>a[7];
    cin>>a[8];
    cin>>a[9];
    cin>>b;

    int p=posizione(a,b);
    if(p){
        cout<<p-1;
    }else{
        cout<<"non presente";
    }

    return 0
}
