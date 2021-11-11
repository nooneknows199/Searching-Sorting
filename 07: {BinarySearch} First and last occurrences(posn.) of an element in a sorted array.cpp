// By using lower and upper bound:
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)  cin>>a[i];
    int idx1 = lower_bound(a,a+n,x) - a ;
    int idx2 = upper_bound(a,a+n,x) - a-1 ;
    if(idx1 == n) cout<<"-1\n";
    else cout<<idx1<<" "<<idx2<<endl;
}
}

OR

// By using BINARY SEARCH :

class Solution {
public:
   vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> ans={-1,-1};
        int n=nums.size();
        if(n==0) return ans;   
        ans[0]=firstPos(nums,0,n-1,target);
        ans[1]=lastPos(nums,0,n-1,target);
        return ans;
    }
    
    int firstPos(vector<int>&nums,int lo,int hi,int target){
        while(lo<=hi){
           int mid=lo+(hi-lo)/2; 
            if(nums[mid]<target){
                lo=mid+1;
            }
            else if(nums[mid]>target) hi=mid-1;
            
            else{  //If mid is target element
                if(mid==0 || nums[mid-1]<nums[mid]) return mid;  //if mid is first occurrence of target then either it is the first element of array i.e. it has no element before it, or element before mid element is smaller than it
                else hi=mid-1; //if mid is not first occurrence then find in left half
            }
        }
        return -1;
    }
    
    int lastPos(vector<int>&nums,int lo,int hi,int target){
         while(lo<=hi){
           int mid=lo+(hi-lo)/2; 
            if(nums[mid]<target){
                lo=mid+1;
            }
            else if(nums[mid]>target) hi=mid-1;
            else{  //If mid is target element
                if(mid==nums.size()-1 || nums[mid+1]>nums[mid]) return mid; //if mid is last occurrence of target then either it is the last element of array i.e. it has no element after it, or element after mid element is greater than it
                else lo=mid+1; //if element is not the last occurrence,then find in right half
            }
        }
        return -1;
    }
    
};
