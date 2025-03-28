/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

void solve() {
    int n,q; cin >> n >> q;
    string s; cin >> s;
    while(q--) {
        string query;
        int perm;
        cin >> query >> perm;
        while(perm--) {
            next_permutation(query.begin(), query.end());
        }

        cout << query << nl;
    }
}

int main(){
    fastio();

    solve();

    return 0;
}