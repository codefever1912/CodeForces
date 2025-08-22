#include <bits/stdc++.h>
using namespace std;

void solve(){
    map<char,int>count;
    string s;cin >> s;
    for(int i=0;i<5;i++){
        count[s[i]]++;
    }
    if(count['A']>2){cout << 'A' << endl;}
    else cout << "B" << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}