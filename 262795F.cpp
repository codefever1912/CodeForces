/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n,q; cin >> n >> q;
    vector<int>a(n+1);
    for(int i(0);i<n;i++) {cin >> a[i];}
    vector<int>queries(n+2);
    int L,R,val;
    while(cin >> L >> R >> val) {
        L--; R--;
        queries[L] += val;
        queries[R+1] -= val;
    }
    for(int i{1};i<=n;i++) {
        queries[i] += queries[i-1];
    }
    for(int i{0};i<n;i++) {
        a[i] += queries[i];
        cout << a[i] << " ";
    }
    cout << '\n';
    //using difference array
    // a[l-1]+= val
    // a[r] -= val;
    // a[i] += a[i-1]
    // 1 0 1 0 1 0
    // 0 3 0 2 0 0 -5
    // 0 3 3 5 5 5 0
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}