#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    for(char c:s){
        c = tolower(c);
        if(!(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')){ans+=".";ans+=c;  }
    }

    cout << ans << endl;
}