#include <iostream>
using namespace std;

int main(){
    int n,ans=0;
    cin >> n;
    for(int i=5;i>=1;i--){
        if(n==0){break;}
        else if(n<i){continue;}
        ans+=n/i;
        n-=i*ans;
    }
    cout << ans << endl;
}