#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MAX = 1e6+1;
vector<bool>prime(MAX,1);

void solve(ll x){
    ll sq = sqrt(x);
    if(sq*sq==x && prime[sq]){
        cout << "YES"<< endl;
    }else cout << "NO" << endl;
}

int main(){
    prime[0] = prime[1] = 0;
    for(int i=2;i*i<=MAX;i++){
        for(int j=i*i;j<=MAX;j+=i){
            prime[j] = 0;
        }
    }

    int n;cin >> n;
    for(int i=0;i<n;i++){
        ll x;cin >> x;
        solve(x);
    }
}