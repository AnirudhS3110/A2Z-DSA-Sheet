/*
Problem Statement: Given an array ‘arr of integer numbers, ‘ar[i]’ represents the number of pages in the ‘i-th’ book. There are a ‘m’ number of students, and the task is to allocate all the books to the students.
Allocate books in such a way that:

Each student gets at least one book.
Each book should be allocated to only one student.
Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum. If the allocation of books is not possible. return -1
*/

#include <bits/stdc++.h>
using namespace std;

bool Check(vector<int> &arr, int threshold , int m)
{
    int n= arr.size();
    int students=0;
    int pages = arr[0];
    for(int i=0;i<n;i++)
    {
        if(pages==threshold)
        {
            pages=0;
            students++;
        }
        else if(pages>threshold)
        {
            pages=arr[i];
            students++;
        }
        else    
            pages+=arr[i];
    }
    return students>=m;

}

int main()
{
    int n,m;
    cout << "Enter the number of books:" << endl;
    cin >> n;
    cout <<  "Enter the number of students" << endl;
    cin >> m;
    vector<int> pages(n);
    vector<int> cum(n);
    cout << "enter the values of pages of each book"<<endl;
    for(int i=0 ; i<n;i++){
        cin >> pages[i];
        if(!i)
            cum[i]=pages[i];
        else
            cum[i] = cum[i-1]+pages[i];
    }
        
    int l = 0;
    int r =  n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(Check(pages,cum[mid],m))
        {
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout << "Min number of maximized pages:" << cum[r+1]<<endl;
};