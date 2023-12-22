#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;string s;
        cin >> n >> s;
        string name = "Timru";
        sort(s.begin(),s.end());
        s==name?cout << "YES "<< endl:cout << "NO" << endl;
    }
}