#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    // int n,k;cin >> n >> k;
    // int a[n];
    // for(auto &e:a){cin >> e;}
    // if(is_sorted(a,a+n)){
    //     cout << "YES" << endl;return;
    // }
    // if(k==1){cout << "NO" << endl;}
    // else cout << "YES" << endl;

    // Basically what we have to do is that check for a specific length k, can the array be sorted into non-decreasing order
    // reversing only sub arrays of max length k
    int n,k; cin >> n >> k;
    int a[n];
    for(auto &e : a) {cin >> e;}
    if(is_sorted(a, a+n) || k != 1) {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
}
int main(){
    int t;cin >> t;
    while(t--){solve();}
}