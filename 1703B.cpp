#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    string s;cin >> s;
    int count = 0;
    vector<bool>status(26,0);
    for(char c:s){
        if(status[c-'A']){count++;}
        else{status[c-'A']=1;count+=2;}
    }
    cout << count << endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}