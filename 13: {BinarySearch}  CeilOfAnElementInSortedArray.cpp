#include<bits/stdc++.h>      // T.C : O(log n)
using namespace std;                         
int binarySearch(int arr[], int first, int last, int x) 
{ 
     int res = -1;
    while(first<=last)
    {
       int mid=first+(last-first)/2;
        if (arr[mid] == x) 
            return arr[mid]; 
            
        else if (arr[mid] > x) {
           res = arr[mid];
           last = mid - 1; 
      }
      
        else
            first = mid + 1; 
    } 
     return res;
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

    ( res == -1 ) ? cout << -1 : cout << res; 
}   
