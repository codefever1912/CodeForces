#include <iostream>
using namespace std;

bool solve(string s){
    string s1 = "hello";
    for(int i=0;i<5;i++){
        char c = s1[i];
        int index = s.find(c);
        if(index!=-1){
            s.erase(0,index+1);
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    bool ans = solve(s);
    ans?cout << "YES" << endl:cout << "NO" << endl;
}
