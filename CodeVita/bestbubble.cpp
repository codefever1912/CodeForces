#include <bits/stdc++.h>
using namespace std;

int merge_and_count(vector<int> &arr, int left, int mid, int right) {
    int i = left, j = mid, k = 0;
    vector<int> temp(right - left + 1);
    int swaps = 0;

    while (i < mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            swaps += (mid - i);  
        }
    }

    while (i < mid)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];

    return swaps;
}

int merge_sort_and_count(vector<int> &arr, int left, int right) {
    int swaps = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        swaps += merge_sort_and_count(arr, left, mid);
        swaps += merge_sort_and_count(arr, mid + 1, right);

        swaps += merge_and_count(arr, left, mid + 1, right);
    }
    return swaps;
}

int count_inversions(vector<int> arr, bool ascending) {
    if (!ascending) {
        reverse(arr.begin(), arr.end());
    }
    return merge_sort_and_count(arr, 0, arr.size() - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int asc_swaps = count_inversions(arr, true);

    int desc_swaps = count_inversions(arr, false);

    cout << min(asc_swaps, desc_swaps) << endl;

    return 0;
}
