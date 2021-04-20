#include<bits/stdc++.h>      // T.C : O(log n)
using namespace std;                         
int binarySearch(int arr[], int first, int last, int x) 
{ 
    while(first<=last)
    {
       int mid=first+(last-first)/2;
       
        if (arr[mid] == x) 
            return mid;
            
        else if(arr[mid-1] == x && mid-1 >= first)
            return mid-1;
        
        else if(arr[mid+1] == x && mid+1 <= last)
            return mid+1;
            
        else if (arr[mid] < x) 
            first = mid + 2; 
       
        else
            last = mid - 2; 
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
  
	int res = binarySearch(arr,0,n-1, x) ; 

    (res == -1 ) ? cout << -1 : cout << res; 
}   
