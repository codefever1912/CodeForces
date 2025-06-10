/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int target_gcd = a[0];
    for (int i = 1; i < n; ++i) {
        target_gcd = __gcd(target_gcd, a[i]);
    }

    map<int, int> freq;
    for (int x : a) {
        freq[x]++;
    }

    if (freq.size() == 1 && freq.count(target_gcd)) {
        cout << 0 << nl;
        return;
    }

    map<map<int, int>, int> visited;
    queue<pair<map<int, int>, int>> q;
    
    q.push({freq, 0});
    visited[freq] = 0;

    while (!q.empty()) {
        auto [curr_freq, steps] = q.front();
        q.pop();

        if (curr_freq.size() == 1 && curr_freq.count(target_gcd) && curr_freq[target_gcd] == n) {
            cout << steps << nl;
            return;
        }

        if (steps >= 15) continue;

        for (auto &[val1, count1] : curr_freq) {
            if (count1 == 0 || val1 == target_gcd) continue;
            
            for (auto &[val2, count2] : curr_freq) {
                if (count2 == 0) continue;
                if (val1 == val2 && count1 < 2) continue;
                
                int new_val = __gcd(val1, val2);
                if (new_val == val1) continue;
 
                auto next_freq = curr_freq;
                next_freq[val1]--;
                if (next_freq[val1] == 0) next_freq.erase(val1);
                next_freq[new_val]++;
                
                if (visited.find(next_freq) == visited.end() || visited[next_freq] > steps + 1) {
                    visited[next_freq] = steps + 1;
                    q.push({next_freq, steps + 1});
                }
            }
        }
    }

    cout << -1 << nl;
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}