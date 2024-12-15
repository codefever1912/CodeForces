#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >>k;
        vector<int>a(n);
        vector<int>b(n);
        for(auto &e:a){cin >> e;}
        for(auto &e:b){cin >> e;}
        vector<int>c(n);
        int x = partial_sum(a.begin(),a.end(),c.begin);
        cout << x;
    }
}