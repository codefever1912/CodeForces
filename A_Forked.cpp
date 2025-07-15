/*
  Codeforces -> codefever1912
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    int a, b; cin >> a >> b;
    int xk, yk, xq, yq; cin >> xk >> yk >> xq >> yq;

    vector<pair<int, int>>poss;
    if (a == b) {
        poss.push_back({xk + a, yk + b});
        poss.push_back({xk + a, yk - b});
        poss.push_back({xk - a, yk + b});
        poss.push_back({xk - a, yk - b});
    } else {
        poss.push_back({xk + a, yk + b});
        poss.push_back({xk + a, yk - b});
        poss.push_back({xk - a, yk + b});
        poss.push_back({xk - a, yk - b});

        poss.push_back({xk + b, yk + a});
        poss.push_back({xk + b, yk - a});
        poss.push_back({xk - b, yk + a});
        poss.push_back({xk - b, yk - a});
    }

    int res = 0;
    for (auto x : poss) {
        if (a == b) {
            if (xq + a == x.first && yq + b == x.second) res++;
            else if (xq + a == x.first && yq - b == x.second) res++;
            else if (xq - a == x.first && yq + b == x.second) res++;
            else if (xq - a == x.first && yq - b == x.second) res++;
        } else {
            if (xq + a == x.first && yq + b == x.second) res++;
            else if (xq + a == x.first && yq - b == x.second) res++;
            else if (xq - a == x.first && yq + b == x.second) res++;
            else if (xq - a == x.first && yq - b == x.second) res++;
    
            else if (xq + b == x.first && yq + a == x.second) res++;
            else if (xq + b == x.first && yq - a == x.second) res++;
            else if (xq - b == x.first && yq + a == x.second) res++;
            else if (xq - b == x.first && yq - a == x.second) res++;
        }
    }

    cout << res << nl;

    /*
    poss = [{2, 1},  {2,-1}, {-2,1}, {-2,-1}, {1,2}, {1,-2}, {-1,2}, {-1,-2}]
    xq, yq = {3, 3}
    {1,2} -> res = 1
    {2,1} -> res = 2

    */
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}