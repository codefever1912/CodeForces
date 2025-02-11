/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

// bool solve1(vector<int>a,int s, int e) {
//     if(s==e) {return true;}
//     for(int i{s};i<e;i++) {
//         if(a[i] > a[i+1]) {return false;}
//     }

//     return true;
// }

void solve() {
    int n; cin >> n;
    vector<int>a(n);
    for(auto &e : a){cin >> e;}
    int cnt{0};
    for(int i{0};i<n;i++) {
        for(int j{i};j<n;j++) {
            if(j > i && a[j] < a[j-1]) break;
            cnt++;
        }
    }

    // ll cnt = 0; // Use long long to avoid overflow
    // int len = 1; // Length of the current sorted segment

    // for (int i = 1; i < n; i++) {
    //     if (a[i] >= a[i - 1]) {
    //         len++; // Extend the sorted segment
    //     } else {
    //         cnt += (ll)len * (len + 1) / 2; // Add the count for the current segment
    //         len = 1; // Reset the length for the next segment
    //     }
    // }
    // cnt += (ll)len * (len + 1) / 2; // Add the count for the last segment

    // cout << cnt << '\n';

    cout << cnt << '\n';
    // 1 4 2 3 5
    // i
    // j 
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}