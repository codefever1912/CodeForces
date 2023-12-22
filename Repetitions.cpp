#include <iostream>
using namespace std;

#define ll long long

int main(){
    string s;
    cin >> s;
    ll count=1,mx=0;
    if(s.size()==1){cout << 1 << endl;}
    else{
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) count++;
            else count=1;
            mx = max(count,mx);
        }
        cout << mx << endl;    
    }
}