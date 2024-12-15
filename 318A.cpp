#include <iostream>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;

    if(n%2){
        long long mid = n/2+1;
        if(k<=mid){cout << 2*k-1;}
        else{cout << 2*(k-mid) << endl;}
    }else{
        long long mid = n/2;
        if(k<=mid){cout << 2*k-1;}
        else{cout << 2*(k-mid);}
    }
}