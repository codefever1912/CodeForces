#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(n) for(int i=0;i<n;i++)

bool solve(){
    int n;cin >> n;
    string a,b,c;cin >>a>>b>>c;
    FOR(n){
        if(a[i]==b[i] && a[i]!=c[i]) return true;
        else if(a[i]!=c[i] && b[i]!=c[i]) return true;
    }
    return false;
}

int main(){
    int t;cin >> t;
    while(t--){
        bool ans = solve();
        cout << ((ans)?"YES":"NO") << endl;
    }
}