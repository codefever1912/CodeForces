#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string ans = "";
    for(int i=1;i<=n;i++){
        if(i==1){ans+="I hate ";}
        else if(i%2==0){ans+="that I love ";}
        else ans+="that I hate ";
    }

    cout << ans << "it" << endl;
}