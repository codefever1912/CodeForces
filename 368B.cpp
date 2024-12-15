#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+1;

void solve(){
    int n,m;cin>>n>>m;
    vector<int>count(N,0),v1,v2;
    while(n--){
        int x;cin >>x;
        v1.push_back(x);
        count[x]++;
        if(count[x]==1)v2.push_back(x);
    }
    
}

int main(){
    solve();
}