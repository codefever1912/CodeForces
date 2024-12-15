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
        string s;
        cin >> s; // aabb
     
        ll alpha[26] = {0};
        for (ll i=0; i<s.size(); i++) {
            alpha[s[i]-'a']++;
        }
        ll count = 0;
        for (int i=0; i<26; i++) {
            if (alpha[i]%2) count++;
        }
        if(count<=1){
      cout<<"First"<<endl;
   }
   else if(count%2 == 0)
   {
      cout<<"Second"<<endl;
   }
   else{
      cout<<"First"<<endl;
   }
    }
     
     
    int main() {
        func();
        
        return 0;
    }