#include <iostream>
using namespace std;

int sumofDigits(int x){
    return x? sumofDigits(x/10) + x%10:0;
}

int main(){
    int n;
    cin >> n;

    cout << sumofDigits(n) << endl;
}