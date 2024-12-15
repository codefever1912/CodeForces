#include <iostream>
using namespace std;

#define ll long long

int main(){
    int n;cin >>n;
    ll sum=0;int ans=0;
    for(int i=1;i<=n;i++){
        int x = (i*(i+1))/2;
        if(sum+x>n){ans=i-1;break;}
        else sum += x;ans=i;
    }
    cout << ans << endl;
}