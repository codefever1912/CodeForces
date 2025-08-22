/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int even{0}, odd{0}, pos{0}, neg{0};
    while (n--) {
        int x; cin >> x;
        (x%2)?odd++:even++;
        pos+=(x>0);
        neg+=(x<0);
    }

    cout << "Even: " << even << '\n';
    cout << "Odd: " << odd << '\n';
    cout << "Positive: " << pos << '\n';
    cout << "Negative: " << neg << '\n';
}