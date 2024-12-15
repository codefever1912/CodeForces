#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int mini=INT_MAX;
    for(int i=0;i<=m-n;i++){
        mini = min(mini, a[i+n-1]-a[i]);
    } 
    cout << mini << endl;
}