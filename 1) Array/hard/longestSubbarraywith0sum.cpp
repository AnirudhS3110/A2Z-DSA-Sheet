#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum=0, len=0,maxLen=0,k;
    cin >> n;
    vector<int> nums(n);
    cin >> k;
    unordered_map<int,int> prefix;
    for(int i=0 ;i <n; i++)
    {
        sum+=nums[i];
        prefix[sum]=i;
        if(sum==k)
            cout<<"\n"<< k+1; 
        int diff = sum-nums[i];
        if(prefix.count(nums[i])){
            len = i - prefix[diff];
            maxLen = max(len,maxLen);
        }
    }
    cout<< "\n" << maxLen;
}