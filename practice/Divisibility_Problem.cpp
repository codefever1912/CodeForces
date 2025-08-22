#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int z = y-x%y;
        (z==y) ? cout << 0 << endl:cout << z << endl;
    }
}