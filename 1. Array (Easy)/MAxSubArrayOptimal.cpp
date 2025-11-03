#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >>n;
    vector<int> nums(n);
    cout << "\n Enter the target:" << endl;
    cin >> t;
    cout << "\n Enter the elements of the matrix:" <<endl;
    int x;
    for( int a = 0 ; a < n ;a++)
    {
        cin >>x;
        nums[a] =x;
    }
    int j,sum,len,maxlen;
    sum = nums[0];
    maxlen=0;
    len=0;
    j=0;
    for(int i = 1 ; i < n ; i++)
    {
        sum = sum+ nums[i];
        if(sum == t)
        {
            len = i-j+1;
            maxlen = max(len,maxlen);
        }
        while(sum > t)
        {
            sum-=nums[j];
            j++;
        }
    }
    cout << maxlen;
}