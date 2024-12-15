#include <iostream>
using namespace std;

void solve(string s, int n){
    bool ans = false;
    for(char c:s){
        if(c=='0'){cout << "YES" << endl;ans =true;break;}
    }
    if(!ans){cout << "NO" << endl;}
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;string s;
        cin >> n >> s;
        solve(s,n);
    }
}