/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

int __gcd(int a, int b) {
    if(b == 0 || b == 1) return a;
    else return __gcd(b, a%b);
}

void solve() {
    // rearrange such that all prefxes of the array of length >= 2 are good
    // good -> gcd of all numbers not greater than the length
    // prefix -> contiguous sub array, starting from the first elem
    // 3 6 1
    // pref_gcd = [3,3,3,1]
    int n; cin >> n;
    vector<int>v(n);
    for(auto &e : v) {cin >> e;}
    vector<int>pref_gcd(n+1);
    pref_gcd[0] = v[0];
    for(int i = 1; i <= n; i++) {
        pref_gcd[i] = __gcd(pref_gcd[i-1], v[i]);
    }
    
    bool ans = true;
    for(int i = 2; i <= n; i++) {
        if(pref_gcd[i] > i) {ans = false; break;}
    }

    if(ans) {cout << "Yes" << nl; return;}

    sort(v.begin(), v.end());
    pref_gcd[0] = v[0];
    for(int i = 1; i <= n; i++) {
        pref_gcd[i] = __gcd(pref_gcd[i-1], v[i]);
    }

    ans = true;
    for(int i = 2; i <= n; i++) {
        if(pref_gcd[i] > i) {ans = false; break;}
    }

    cout << ((ans) ? "Yes" : "No") << nl;

}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
} 