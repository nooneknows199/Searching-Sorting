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
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)  cin>>arr[i];
   if(arr[0] < arr[n-1]){
		return 0;
	}
	int count = findRotationCount(arr, n);
	cout<<count;
}
