    #include <iostream>
    #include <climits>
    #include <algorithm>
    #include <numeric>
    #include <string>
    #include <vector>
    using namespace std;
     
    #define ll long long
    #define printnl(a) cout << a << "\n";
    #define printab(a,b) cout << a << " " << b << "\n";
     
    void func() {
        int n,k;
        cin >> n >> k;
     
        string s;
        cin >> s;
     
        int alpha[26] = {0};
        for (int i=0; i<s.size(); i++) {
            alpha[s[i]-'a']++;
        }
        int count = 0;
        for (int i=0; i<26; i++) {
            if (alpha[i]%2 == 1) count++;
        }
     
        if (count - k > 1) {
            printnl("NO");
        }
        else printnl("YES");
    }
     
     
    int main() {
        int t;
        cin >> t;
        
        while (t--) {
            func();
        }
        
        return 0;
    }