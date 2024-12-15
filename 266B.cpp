#include <iostream>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--){
        for(int i=0;i<s.size()-1;){
            if(s[i]=='B' and s[i+1]=='G'){
                char temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                i+=2;
            }else{
                i++;
            }
        }
    }

    cout << s << endl;
}

//1 -> BGBGBGBB
//2-> GBGBGBBB
//3-> GGBGBBBB