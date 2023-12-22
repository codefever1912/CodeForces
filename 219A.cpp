#include <iostream>
using namespace std;

void solve(string s,int k){
    int alpha[26] = {0};
    for(char d:s){
        alpha[d-'a']++;
    }
    bool ans=true;
    for(int x:alpha){
        if(x%k!=0){ans = false;cout << -1 << endl;return;}
    }
    if(ans){
        string ans = "";     
        for(int i=0;i<26;i++){
            int count = alpha[i]/k;
            for(int j=0;j<count;j++){ans+=char(97+i);}
        }
        for(int i=0;i<k;i++){
            cout << ans;
        }
    }
}

int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    solve(s,k);
}