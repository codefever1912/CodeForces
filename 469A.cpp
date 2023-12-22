#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n] = {0};
    int p,q;
    cin >> p;
    for(int i=0;i<p;i++){
        int x;
        cin >> x;
        a[x-1]=1;
    }
    cin >> q;
    for(int i=0;i<q;i++){
        int x;
        cin >> x;
        a[x-1]=1;
    }
    bool ans = true;
    for(int x:a){if(x!=1){ans = false;break;} 
    }
    ans? cout << "I become the guy." << endl:cout << "Oh, my keyboard!" << endl;
}

//Better desgin would be to include set to check for duplicates