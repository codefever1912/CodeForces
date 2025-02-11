/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b; char s;
    cin >> a >> s >> b;
    switch(s) {
        case('+'):
            cout << a+b << '\n'; return 0;
        case('-'):
            cout << a-b << '\n'; return 0;
        case('*'):
            cout << a*b << '\n'; return 0;
        case('/'):
            cout << a/b << '\n'; return 0;
    }
}