#include <iostream>
using namespace std;

void solve(string s, int x, int y, int l, int r){ 
    int x1=0,y1=0;
    for(int i=0;i<l;i++){
        char c = s[i];
        if(c=='U' and y1<y)y1++;
        else if(c=='D' and y1>y)y1--;
        else if(c=='R' and x1<x)x1++;
        else if(c=='L' and x1>x)x1--;
        if(x1==x and y1==y){cout << "YES" << endl;return;}
    }

    for(int i=r-1;i>=l;i--){
        char c = s[i];
        if(c=='U' and y1<y)y1++;
        else if(c=='D' and y1>y)y1--;
        else if(c=='R' and x1<x)x1++;
        else if(c=='L' and x1>x)x1--;
        if(x1==x and y1==y){cout << "YES" << endl;return;}
    }
    
        
    for(int i=r;i<s.size();i++){
        char c = s[i];
        if(c=='U' and y1<y)y1++;
        else if(c=='D' and y1>y)y1--;
        else if(c=='R' and x1<x)x1++;
        else if(c=='L' and x1>x)x1--;
        if(x1==x and y1==y){cout << "YES" << endl;return;}
    }
    f
    cout << "NO" << endl;
    return;
}

int main(){
    int n,q;
    cin >>n>>q;
    string s;
    cin >> s;
    while(q--){
        int x,y,l,r;
        cin >> x >> y >>l>>r;
        solve(s,x,y,l,r);
    }
}