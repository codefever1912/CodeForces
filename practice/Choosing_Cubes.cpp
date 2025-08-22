#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,f,k;cin>>n>>f>>k;
    if(n==k) {cout << "YES" << endl;return;}
    int a[n];
    for(auto &e : a) {cin >> e;}
    int *fav = &a[f];
    sort(a,a+n);
    reverse(a,a+n);
        
    int s,e,curr;
    for(int i{0};i<n-1;i++) {
        if(a[i]!=*fav && a[i+1]==*fav) {s=i+1;}
        if(a[i]==*fav && a[i+1]!=*fav) {e=i;}
        if(&a[i]==fav) {curr=i;}
    }

    if(e <= k-1) {cout << "YES" << endl;}
    else if(s <= k-1 && e > k-1) {cout << "MAYBE" << endl;}
    else if(s > k-1) {cout << "NO" << endl;}
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}