#include <iostream>
using namespace std;

#define ll long long

int main(){
    ll n,m;
    cin >> n >> m;
    ll curr = 1;
    ll time =0;
    for(ll i=0;i<m;i++){
        ll x;
        cin >> x;
        if(x>curr){time+=x-curr;}
        else if(x<curr){time+=n+x-curr;}
        curr = x;
    }
    cout << time << endl;
}