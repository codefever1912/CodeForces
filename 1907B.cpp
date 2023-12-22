#include <iostream>
using namespace std;
void solve(string s){
    int lower,upper;
    string ans;
    for(int i=0;i<s.size();i++){
        if(islower(s[i])){lower = i;}
        else upper= i;
        ans=s.substr(0,lower-1)+s.substr(lower+1,s.size());
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        solve(s);
    }
}