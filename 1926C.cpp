#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 2e5+1;
const int MOD = 1e9+7;

vector<int>sum(N);

ll computeSum(ll x){
    ll totalSum=0;
    while(x>0){
        totalSum += x%10;
        x/=10;
    }
    return totalSum;
}

void preCompute(){
    ll ans =0;
    for(int i=1;i<=N;i++){
        ans += computeSum(i);
        sum[i] = ans;
    }
}

void solve(){
    int n;cin >> n;
    cout << sum[n] << endl;
}

int main(){
    int t;cin >> t;
    preCompute(); // -> has an order of O(N)
    while(t--){
        solve();
    }
}