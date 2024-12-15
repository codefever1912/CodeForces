#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    for(int i=0;i<4;i++){cin >> a[i];}
    sort(a,a+4);
    int x,y,z;
    z = (a[2]-a[0]+a[1])/2;
    y = a[1]-z;
    x = a[3]-y-z;
    cout << x << " " << y << " " << z << endl;
}