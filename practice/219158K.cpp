/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int a,b,c; cin >> a >> b >> c;
    int mx = max(a, max(b,c));
    int mn = min(a, min(b,c));
    cout << mn << " " << mx << endl;

    
}