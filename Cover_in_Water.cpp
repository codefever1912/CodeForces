#include <iostream>
using namespace std;

void solve(){
    //Basically jsut have to iterate thorugh the char array and keep counting instances of '.', and if there are 3 consecutive
    // dots, then we output 2 alse we output the no of '.' encountered
    int n;cin >> n;
    char a[n];
    for(auto &e : a) {cin >> e;}
    int cnt{0},ans{0};
    for(char c : a) {
        if(c=='.') {
            cnt++,ans++;
            if(cnt==3) {cout << 2 << endl; return;}
        } else {cnt=0;}
    }

    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--) {
        solve();
    }
}