#include <iostream>
#include <vector>
using namespace std;

void check(string s,int k){
    vector<int>a(26,0);
    for(char c:s){
        c = tolower(c);
        a[c-'a']++;
    }

    long long count;
    for(int i=0;i<a.size();i++){
        if(a[i]%2){count++;}
    }
    if(count-k>1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}

int main(){
    int k;
    string s;
    cin >> s >> k;
    check(s,k);
}