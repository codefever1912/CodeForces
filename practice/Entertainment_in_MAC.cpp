#include <iostream>
using namespace std;

#define ll long long

void solve(){
    ll n;cin >> n;
    string s;cin >> s;
    char c;
    if(s[0]>s[s.size()-1]){c=s[s.size()-1];}
    else c=s[0];
    if(n%2&&c==s[0]){cout << s;for(int i=s.size()-1;i>=0;i--){cout << s[i] << endl;}}
    else if(n%2==0 && c==s[0]){cout << s << endl;}
    else if(n%2==0 && c==s[s.size()-1]){for(int i=s.size()-1;i>=0;i--){cout << s[i];}cout << s << endl;}
    else if(n%2 && c==s[s.size()-1]){cout << s << endl;}
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}