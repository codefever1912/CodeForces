#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
    int x = s.rfind('.');
    cout << s.substr(x+1) << endl;
}