#include<bits/stdc++.h>      // T.C : O(log n)
using namespace std;                         

int findRotationCount(int arr[], int n)
{	
    int first=0;
   int last=n-1;
 
    while(first<=last)
    {
        if (arr[first] <= arr[last]) {
            return first;
        }
        int mid=(first+last)/2;
       int next = (mid+1) % n;
       int prev = (mid+n-1) % n;
       
       if(arr[mid]<=arr[next] && arr[mid]<= arr[prev]){
      return mid;
       }
       if(arr[first]<=arr[mid])
       first = mid+1;
        else if(arr[mid]<=arr[last])
       last = mid-1;
	}
  return -1;
}
int binarySearch(int arr[], int first, int last, int x) 
{ 
    while(first<=last)
    {
       int mid=(first+last)/2;
  
        if (arr[mid] == x) 
            return mid; 
            
      if (arr[mid] < x) 
            first = mid + 1; 
       
        else
            last = mid - 1; 
    } 
     return -1; 
} 
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)  cin>>arr[i];
   int x;
   cin>>x;
   if(arr[0] < arr[n-1]){
		return 0;
	}
	int index = findRotationCount(arr, n);
int res1 = binarySearch(arr,0,index-1, x) ; 
int res2 = binarySearch(arr,index,n-1, x) ; 
  int ans = (res1 > 0) ? res1 : res2 ;
(res1 == -1 && res2 == -1) ? cout << -1
                   : cout << ans; 
}
