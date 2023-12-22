#include <iostream>
using namespace std;

#define ll long long
    
int main(){
    int t;cin >> t;
    while(t--){
        int n,m;cin >> n >> m;
        cout << max(m,n) << endl;
    }
}