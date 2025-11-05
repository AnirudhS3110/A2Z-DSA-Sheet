//Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int> nums(n);
    cout << "\n Enter the elements of the matrix:" <<endl;
    int x;
    for( int a = 0 ; a < n ;a++)
    {
        cin >>x;
        nums[a] =x;
    }
    int sum,maxSum;
    sum=0;
    maxSum = INT_MIN;
    int start, end;
    start =0;

    for(int i=0;i <n ; i++)
    {
        sum+=nums[i];

        if(maxSum < sum)
        {
            maxSum = sum;
            end=i;
        }
        if(sum < 0)
        {
            sum=0;
            if(nums[i] < n-1)
            {
                 start = i+1;
            }
        }  
    }

    if(start < end){
        cout << "Longest Subarray:" <<endl;
        for(int a = start ; a <=end ; a++ )
        {
            cout<< nums[a] << " ";
        }
        cout<< "\nMax Sum:" << maxSum; 
    }
    else if(maxSum < 0)
    {
        cout << "Longest Subarray:" <<endl;
        cout << nums[0];
        cout<< "\nMax Sum:" << maxSum; 
    }
    else{
        cout << "Longest Subarray:" <<endl;
        cout << nums[start];
        cout<< "\nMax Sum:" << maxSum; 
    }
}