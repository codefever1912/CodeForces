#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }

    if(sum%2==0 and sum%200==0 and n>1    ){cout << "YES" << endl;}
    else cout << "NO" << endl;
}