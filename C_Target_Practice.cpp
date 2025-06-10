/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    int score = 0;
    int matrix[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1},
    };
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            char x; cin >> x;
            if(x == 'X') score += matrix[i][j];
        }
    }

    cout << score << nl;

    /*
    i=1 -> 10 1's
    i=2 -> 2 1's, 8 2's x`  
    i=3 -> 2 1's, 2 2's, 6 3's
    i=4 -> 2 1's, 2 2's 2 3's 4 4's
    i=5 -> 2 1's 2 2's 2 3's 2 4's 2 5's  
    */

}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
     }
}   