/* /*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio()  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    int n, m; cin >> n >> m;
    vector<int>v(n);
    vin(v);
    // int curr = 1;
    // deque<int>q;
    // q.push_back(v[0]);
    // while(!q.empty()) {
    //     int top = q.front();
    //     q.pop_front();
    //     if(top > m){
    //         top -= m;
    //         q.push_back(top);
    //     }
    //     // 6 7
    //     // 3 4 5 2 3 1
    // }
    int idx = 0, mx = 0;
    for(int i = 1; i <= n; i++) {
        if(v[i-1] > m) {
            if(((v[i-1] + m - 1) / m) >= mx) {
                mx = (v[i-1] + m - 1 ) / m;
                idx = i;
            }
        }
    }

    cout << ((idx == 0) ? n : idx) << nl;
    // 6 1 5 4 2 3 1
    /*
    1 5 4 2 3 1 3*
    5 4 2 3 1 3*
    4 2 3 1 3* 2
    2 3 1 3* 2 1
    
    4 2
    1(1) 4(2) 3(2) 2(1)

    */
}

int main(){
    fastio();
    solve();

    return 0;
}