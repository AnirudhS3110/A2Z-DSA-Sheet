#include <bits/stdc++.h>
using namespace std;


bool isManagable( vector<int> &arr,int min_threshold,int k){
    int n= arr.size();
    int placed=1;
    int last = arr[0];
    for(int j=0 ; j < n; j++ )
    {
        if(arr[j]-last >= min_threshold)
        {
            placed++;
            last = arr[j];
        }
    }
    return placed >= k;
}

int main()
{
    int n,k;
    cout << "enter the size of hte array"<<endl;
    cin >> n;
    cout << "Enter the number of Cows:" <<endl;
    cin >> k;
    vector<int> arr(n);
    cout << "Enter the values of the position of Stalls:" <<endl;
    for(int i =0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int l,r;
    l = 1; r = arr[n-1]-arr[0];
    int ans=1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(isManagable(arr,mid,k))
        {
            ans=mid;
            l=mid+1;
        }
        else    
            r=mid-1;
    }
    cout << "The maximized minimum nunmber of gap between the cows is:" << r;
}