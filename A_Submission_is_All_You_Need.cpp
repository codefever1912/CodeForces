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
    int n; cin >> n;
    vector<int>v(n);
    vin(v);


    sort(v.begin(), v.end());
    vector<int>curr; //Store curr elements that are consecutive
    curr.push_back(v[0]);
    int score = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] - v[i-1] == 1) {
            curr.push_back(v[i]);
        } else {
            if (curr.size() == 1) {
                if (curr[0] == 0) score ++;
                else score += curr[0];
            } else if (curr.size() > 1) {
                int subset_sum = accumulate(curr.begin(), curr.end(), 0);
                int mex = ((curr[0] == 0) ? curr.back() + 1 : 0);
                score += max(subset_sum, mex);
            }

            curr.clear();
            curr.push_back(v[i]);
        }
    }

    if (!curr.empty()) {
        if (curr.size() == 1) {
            // if (curr[0] == 0 || curr[0] == 1) score += curr[0] + 1;
            if (curr[0] == 0) score++;
            else score += curr[0];
        } else {
            int sum = accumulate(curr.begin(), curr.end(), 0);
            int mex = ((curr[0] == 0) ? curr.back() + 1 : 0);
            score += max(sum, mex);
        }
    }

    cout << score << nl;

}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}