/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char X; cin >> X;
    int ascii = (int)X;
    if(ascii >=48 && ascii<=57) {
        cout << "IS DIGIT" << '\n';
    } else {
        cout << "ALPHA" << '\n';
        if(ascii>=65 && ascii<=90) {
            cout << "IS CAPITAL" << '\n';
        } else cout << "IS SMALL" << '\n';
    }

    return 0;
}