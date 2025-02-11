/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    // int n; cin >> n;
    // stack<string>st;
    // for(int i{1};i<=n;i++) {
    //     string s = "";
    //     for(int j{n-i};j>0;j--) {
    //         s.append(" ");
    //     }
    //     for(int k{0};k<2*i-1;k++) {
    //         s.append("*");
    //     }
    //     cout << s << '\n';
    //     st.push(s);
    // }
    // while(!st.empty()) {
    //     cout << st.top() << '\n';
    //     st.pop();
    // }
    int n; cin >> n;
    stack<string>st;
    for(int i{1};i<=n;i++) {
        string s(n-i,' ');
        s += string(2*i-1, '*');
        cout << s << '\n';
        st.push(s);
    }
    while(!st.empty()) {
        cout << st.top() << '\n';
        st.pop();
    }
}

int main(){
    fastio();

    solve();
}