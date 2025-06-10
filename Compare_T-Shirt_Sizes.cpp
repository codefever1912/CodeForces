#include <iostream>
#include <vector>
using namespace std;

void solve(){
    string a,b;cin >> a >> b;
    char a1 = a.back(),b1=b.back();
    
    if(a1==b1){
        if(a.length()==b.length()){cout << "=" << endl;return;}
        else if(a1=='S'){cout << (a.length()>b.length()?'<':'>');}
        else{cout << (a.length()>b.length()?'>':'<');}
    }else{
        cout << (a1<b1?'>':'<');
    }
    cout << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}