#include <iostream>
using namespace std;

int main() {
    int n,m,a;
    cin >> n >> m >> a;
    long long x = (n+a-1)/a;
    long long y = (m+a-1)/a;

    cout << x*y << endl;
}