#include <iostream>
using namespace std;

int main(){
    string s1,s2,s3="";
    cin >> s1 >> s2;

    for(auto i = s1.end();i!=s1.begin();i--){
        s3+=*i;
    }
    s3==s2?cout << "YES" << endl:cout << "NO"<<endl;
}