#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1,1,1,2,2,3};
    unordered_map<int,int>mp;
    for(int x : a) {mp[x]++;}
    for(auto x : mp) cout<<x.first<<" "<<x.second<<endl;    
    priority_queue<pair<int,int>>q;
    for(auto x : mp) {
        q.push(make_pair(x.second,x.first)); 
    }
    cout << endl;
    while(!q.empty()) {
        cout << q.top().first << " " << q.top().second << endl;
        q.pop();
    }
    // int k = 2;
    // while(k--) {
    //     int x = q.top().second;
    //     cout << x << endl;
    //     q.pop();
    // }
}