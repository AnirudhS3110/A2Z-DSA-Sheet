#include <bits/stdc++.h>

int main()
{
    int n,l=0,r,mid,target,ans;
    cin >> n;
    r=n-1;
    vector<int> nums(n);
    cin >> target;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(nums[mid]==target)
        {
            cout << "The index is:" << mid;
            return 0;
        }
        else if(target > nums[mid]){
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout << mid;
}