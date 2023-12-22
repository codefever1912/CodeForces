#include <iostream>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll y,x;
        cin >> y >> x; // col, row
        ll mx = max(y,x);
        ll my = mx*mx,ans;
        if(y==x){
            ans = my-mx+1; 
        }else if(y>x){
            if(y%2){
                ans = my-mx+1-mx+y; 
            }else{
                ans = my+1-x;
            }
        }else{
            if(x%2){
                ans = my+1+mx-y;
            }else{
                ans = -mx+1+y;
            }
        }
        cout << ans << endl;
    }
}