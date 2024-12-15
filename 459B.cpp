#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(){
    ll n;
    cin >> n;   
    vector<ll>a(n); // signed int overflow
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end()); // 1 1 2 3 3,  1 1
    ll max = a.back()-a.front(),ways;
    if(a[0]==a[n-1]){
        cout << max << " " << (n*(n-1))/2 << endl;
    }else{
        ll b=0,c=0;
        for(ll x:a){
            if(x==a[0]){b++;}
            else if(x==a[n-1]){c++;}
        }
        cout << max << " " << b*c << endl;
    }
}