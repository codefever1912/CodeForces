#include <iostream>
using namespace std;

void solve(){
    int n;cin >> n;
    string s;cin >> s;
    int ans = 1 + s.rfind("B")-s.find("B");
    cout << ans << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}