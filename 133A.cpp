#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool ans = false;

    for(char c:s){
        if(c=='H' or c=='Q' or c=='9' or c=='+'){ans=true;}
    }

    if(ans){cout << "YES" << endl;}
    else cout << "NO" << endl;
}