#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
}
int main()
{
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter An Array: ";
    for(int i=0;i<n; i++)
        cin>>a[i];
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int ind = binarySearch(a, target);
    if (ind == -1)
        cout << "The target is not present." << endl;
    else
    cout << "The target is at position: "<< ind << endl;
    return 0;
}



