#include <iostream>
#include <algorithm>
using namespace std;

bool check(string &s1, string &s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return s1==s2;
}

int main(){
    string a,b,c;
    cin >> a >> b >>c;

    string s1 = a+b;
    if(check(s1,c)){
        cout << "YES" << endl;
    }else{cout << "NO" << endl;}
}