#include <bits/stdc++.h>
using namespace std;

void SubSuquencesWithSumK(int idx, vector<int> &v, vector<vector<int>> &result, vector<int> curr, int curr_sum, int target_sum) {
  if (idx == v.size()) {
    if (curr_sum == target_sum) {
      result.push_back(curr);
    }
    return;
  }

  curr.push_back(v[idx]);
  SubSuquencesWithSumK(idx + 1, v, result, curr, curr_sum + v[idx], target_sum);

  curr.pop_back();
  SubSuquencesWithSumK(idx + 1, v, result, curr, curr_sum, target_sum);
}

int main() {
    // // using a map to call functions as strings, where strings are mapped to
    // lambda functions using RetType = variant<void *, char, string>;
    // unordered_map<string, function<RetType(string &, optional<int>,
    // optional<int>, optional<char>)>> mp = {
    //     {"pop_back", [](string &s) {
    //         if(!s.empty()) {
    //             s.pop_back();
    //         }
    //     }},

    //     {"push_back", [](string &s, optional<int>, optional<int>,
    //     optional<char> c) {
    //         s.push_back(*c);
    //     }},

    //     {"front", [](string &s) {
    //         return s.front();
    //     }},

    //     {"back", [](string &s) {
    //         return s.back();
    //     }},

    //     {"sort", [](string &s, int l, int r) {
    //         sort(s.begin() + l, s.begin() + r);
    //     }},

    //     {"reverse", [](string &s) {
    //         reverse(s.begin(), s.end());
    //     }},

    //     {"print", [](string &s, int pos) {
    //         return s.at(pos);
    //     }},

    //     {"substr", [](string &s, int l, int r) {
    //         return s.substr();
    //     }},
    // };

    // Using prefix sum for efficient rang esum queries  over an array of large
    // size
    // 1d
    // int n = 10;
    // vector<int>a(n);
    // for(int i{1}; i<=n; i++) {
    //     a[i] = i;
    // }
    // vector<int>prefix(n+1, 0);
    // for(int i=1; i<n; i++) {
    //     prefix[i] = prefix[i-1] + a[i-1];
    // }
    // for(int i=1; i<=n; i++) {
    //     cout << prefix[i] << nl;
    // }

    // // Range sum query
    // int l,r;
    // //Making sure the indices are within the range [0,n)
    // l = ((l > 0)?l:l+n);
    // r = ((r > 0)?r:r+n);
    // cout << a[r] - a[l];
    // // In the event of query updation, i.e. adding or subtracting a specific
    // value within range[l,r] for every query

    // Given N targets -> each round, starting from left to right, you shoot
    // targets alternatively until a single target is left Return the accumulated
    // sum of targets, where target[i] has a score of i Constraints -> N - 1e6

    /*
    Q -> GIven a string s, cpmpute the max interesting sum of any sub array of s
    Interesting sum -> alternating +/- of elements of the subarray starting with
    addition Apparent solution -> using DP

    */
    // Rotate an array
    /*
    v
  */

    /*
    XOR
    A ^ 0 = A
    A ^ A = 0
    A ^ B = B ^ A


    */

    // Calculating all subsequence whose sum == k
    // vector<int> v = {1, 2, 3, 4, 5};
    // int k = 10;
    // vector<vector<int>> result;
    // vector<int> current;
    // int n = v.size();
    // SubSuquencesWithSumK(0, v, result, current, 0, k);

    // for (const auto &v : result) {
    //   for (const int x : v) {
    //     cout << x << ' ';
    //   }
    //   cout << '\n';
    // }

    string s = "Dnyanesh";
    string a = s.substr(0,8);
    cout << a << "\n";
}
