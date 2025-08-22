#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n,k;cin >> n>>k;
    int a[n];
    for(auto &e:a){cin >> e;}
    int target = a[k-1];
    int count = 0;
    for(int x:a){
        if(x>=target and x>0){count++;}
    }
    cout << count << endl;
}