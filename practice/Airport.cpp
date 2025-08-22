#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<int>a(m);
    for(int i=0;i<m;i++){
        cin >> a[i];
    }

    vector<int>b = a;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int max=0, min=0;
    for(int i=0;i<n;i++){
        if(a.back()>0){max+=a.back();a.back()--;}
        sort(a.begin(),a.end());
    }

    for(int i=0;i<n;i++){
        while(b.front()==0){
            b.erase(b.begin());
        }
        min+=b.front();
        b.front()--;
        sort(b.begin(),b.end());
    }

    cout << max << " " << min << endl;
}