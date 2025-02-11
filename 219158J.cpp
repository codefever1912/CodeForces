/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int a,b; cin >> a >> b;
    cout << ((a%b==0 || b%a==0)?"Multiples":"No Multiples") << endl;
}