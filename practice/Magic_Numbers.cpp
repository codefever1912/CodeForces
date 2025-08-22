#include <iostream>
using namespace std;

int main(){
    // 1 14 144
    int n;
    bool ans = true;
    cin >> n;
    string s = to_string(n);
    while(!s.empty()&& ans){
        if(s.find("144")==0){
            s = s.substr(3);
        }else if(s.find("14")==0){
            s = s.substr(2);
        }else if(s.find("1")==0){
            s = s.substr(1);
        }else{
            ans = false;
        }
    }

    ans?cout << "YES" << endl:cout << "NO" << endl;
}