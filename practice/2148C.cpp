#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int>a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    int time = 0, side = 0, score = 0;
    for (int i = 0; i < n; i++) {
        int next_check = a[i];
        int time_left = next_check - time;
        if (time_left % 2) {
            if (side == b[i]) {
                score += (time_left > 0) ? time_left - 1 : 0;
            } else score += time_left;
        } else {
            if (side == b[i]) {
                score += time_left;
            } else score += (time_left > 0) ? time_left - 1 : 0;
        }

        time = a[i];
        side = b[i];
    }
    
    if (time < m) {score += m - time;}

    cout << score << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}