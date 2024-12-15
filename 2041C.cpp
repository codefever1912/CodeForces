#include <bits/stdc++.h>
using namespace std;

int n, result;
vector<vector<vector<int>>> cube;
vector<bool> usedX, usedY, usedZ;

void backtrack(int count, int sum) {
    if (count == n) {
        result = min(result, sum);
        return;
    }
    
    if (sum >= result) return;
    
    for (int x = 0; x < n; x++) {
        if (usedX[x]) continue;
        for (int y = 0; y < n; y++) {
            if (usedY[y]) continue;
            for (int z = 0; z < n; z++) {
                if (usedZ[z]) continue;                
                usedX[x] = usedY[y] = usedZ[z] = true;

                backtrack(count + 1, sum + cube[x][y][z]);
                
                usedX[x] = usedY[y] = usedZ[z] = false;
            }
        }
    }
}

void solve() {
    cin >> n;    
    cube.resize(n, vector<vector<int>>(n, vector<int>(n)));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> cube[i][j][k];
            }
        }
    }
    
    result = INT_MAX;
    usedX.assign(n, false);
    usedY.assign(n, false);
    usedZ.assign(n, false);
    
    // Start backtracking
    backtrack(0, 0);
    
    cout << result << endl;
}

int main() {    
    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}