#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(auto i = a.begin();i!=a.end();i++){
        for(int i=0;i<n;i++){
            if(a[i]==*i)
        }
    }
}