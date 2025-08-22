/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
const int N = 100007;

vector<bool>sieve(N+1,true);
void sieveOfEratosthenese(vector<bool>&sieve) {
    sieve[0] = sieve[1] = false;
    int n = sieve.size();
    for(int i{2};i*i<=n;i++) {
        if(sieve[i]==true){
            for(int j{i*i};j<=n;j+=i) {
                sieve[j]=false;
            }
        }
    }

}

void solve() {
    int n; cin >> n;
    for(int i{2};i<=n;i++) {
        if(sieve[i]) {cout << i << ' ';}
    }
    // cout << '\n';
}

int main(){
    fastio();
    sieveOfEratosthenese(sieve);
    int tests=1;
    while(tests--) {
        solve();
    }  
}