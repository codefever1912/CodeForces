#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int max=0,min=101;
    int mx=0,mn=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x>max){max=x;mx=i;}
        if(x<=min){min=x;mn=i;}
    }

    if(mx>mn){
        cout << (mx-1)+(n-mn-1);
    }else{
        cout << mx+(n-mn-1);
    }
}