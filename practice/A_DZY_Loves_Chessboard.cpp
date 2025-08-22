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
    /*
    3x3
    - - - - -
    - W - W -
    - - - - -
    - - - W -
    - - - - -

    - - - -
    - W B -
    - B W -
    - - - -
    adjacent -> {j, j+1}, {i,i+1}, {i, i-1}, {j, j-1}, 
    */
    int r, c; cin >> r >> c;
    vector<vector<char>>grid(r+2, vector<char>(c+2, '.'));
    
    for(int j = 0; j <= c + 1; j++) {
        grid[0][j] = '-';
        grid[r+1][j] = '-';
    }

    for(int j = 0; j <= r + 1; j++) {
        grid[j][0] = '-';
        grid[j][c+1] = '-';
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> grid[i][j];
        }
    }
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            if (grid[i][j] != '-') {
                if (grid[i][j-1] == 'W' || grid[i][j+1] == 'W' || grid[i-1][j] == 'W' || grid[i+1][j] == 'W') {
                    grid[i][j] = 'B';
                } else if (grid[i][j-1] == 'B' || grid[i][j+1] == 'B' || grid[i-1][j] == 'B' || grid[i+1][j] == 'B') {
                    grid[i][j] = 'W';
                } else if (!isalpha(grid[i][j+1]) && !isalpha(grid[i][j-1]) && !isalpha(grid[i-1][j]) && !isalpha(grid[i+1][j])) {
                    grid[i][j] = 'B';
                }
            }
        }
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cout << grid[i][j];
        }

        cout << nl;
    }
}

int main () {
    fastio();
    solve();

    return 0;
}