#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char x,y;
        cin >> x >>y;
        int z = y-'0';
        for(int i=1;i<9;i++){
            if(i!=z){
                cout << x << i<<endl;
            }
        }
        for(char i = 'a';i<='h';i++){
            if(i!=x){
                cout << i << y << endl;
            }
        }
    }
}