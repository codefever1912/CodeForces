#include <iostream>
using namespace std;

int main(){
    int n,ans;cin>>n;
    if(n>=0){cout << n << endl;}
    n = abs(n);
    int x = n%10,y=n%100/10;
    string s = to_string(n);
    if(y>x){string x = s.substr(0,s.size()-2) + s.substr(s.size()-1);ans=to_integer();}
}