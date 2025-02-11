/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int x; cin >> x;
    // reverse the no with no leading zeros
    int temp = x;
    while(temp%10==0) {temp/=10;}
    while(temp!=0) {
        cout << temp%10;
        temp /=10;
    }   
    
    //Check palindrome
    int a[10] = {0};
    string s = to_string(x);
    for(char c : s) {
        a[c-'0']++;
    }
    int odd{0};
    for(int x : a) {odd += (x%2);}
    cout << '\n';
    cout << ((odd>1)?"NO":"YES") << '\n';
}

int main(){
    fastio();

    solve();
}