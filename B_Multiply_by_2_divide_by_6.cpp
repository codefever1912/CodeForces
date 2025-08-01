/*
  Codeforces -> codefever1912
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    /*
    n cannot contain other primes than 2 & 3 as its prime factors
    given n -> count no. of 2's and 3's in its prime factorization
    if 2's > 3's -> -1 as we cannot get rid of all 2's
    e.g 2 ^ 1 * 3 ^ 2 -> 18 36 6 1
    */
    int n; cin >> n;
    int num2 = 0, num3 = 0;
    //Checking for any other prime factors
     
    //Checking no. of 2's
    while (n % 2 == 0) {
        n /= 2;
        num2++;
    }
    
    //Checking no. of 3's
    while (n % 3 == 0) {
        n /= 3;
        num3++;
    }

    if (n == 1 && num2 <= num3) {
        cout << 2 * num3 - num2 << nl;
    } else cout << -1 << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}