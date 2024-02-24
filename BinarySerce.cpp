#include<bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& arr, int target, int low, int high) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        return mid;
    }

    if (target < arr[mid]) {
        return binarySearch(arr, target, low, mid - 1);
    }

    return binarySearch(arr, target, mid + 1, high);
}

int main() {

    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter An Array: ";
    for(int i=0;i<n; i++)
        cin>>a[i];
    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int ans = binarySearch(a, target, 0, a.size() - 1);

    if (ans != -1) {
        cout << "Element found at position: " << ans << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

