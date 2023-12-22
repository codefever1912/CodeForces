#include <iostream>
using namespace std;


int main(){
    string a,b;
    cin >> a >> b;
    bool ans = false;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]){
                a.erase(i,1);ans=1;
            }else
            ans = 0;
        }
    }
    ans?cout << "YES" << endl:cout << "NO" << endl;
}   