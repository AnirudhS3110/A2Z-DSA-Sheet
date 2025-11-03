#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        unordered_map<int,int> mpp;
        int n =  nums.size();
        int sum =0;
        int req,len,maxlen;
        len=maxlen=0;
        
        for(int i =0 ; i < n ; i++)
…        
    }
};
