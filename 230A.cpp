#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int s,n;
    cin >> s >> n;
    bool ans = true;
    vector<pair<int, int>>a;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        a.push_back(make_pair(x,y));
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(s>a[i].first){s+=a[i].second;}
        else{ans=0;break;}
    }
    ans?cout << "YES" << endl:cout << "NO" << endl;
}