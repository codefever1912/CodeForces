#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>a;
    a.push_back(1);
    for(int x:a){
        cout << x << " ";
    }
}
