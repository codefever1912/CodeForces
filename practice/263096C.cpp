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
            if(query=="prev_permutation") {
                prev_permutation(s.begin(), s.end());
            } else {
                next_permutation(s.begin(), s.end());
            }
        }

        cout << s << nl;
    }
}

int main(){
    fastio();

    solve();

    return 0;
}