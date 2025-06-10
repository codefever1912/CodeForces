#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >>n;
    map<int, int>a;

    long long front=0, back=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]=i+1;
    }
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        int y;
        cin >> y;
        front += a[y];
        back+=n-a[y]+1;
    }

    cout << front << " " << back << endl;
}