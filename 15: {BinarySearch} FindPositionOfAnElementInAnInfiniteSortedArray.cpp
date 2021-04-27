#include<bits/stdc++.h>      // T.C : O(log n)
using namespace std;                         
int binarySearch(int arr[], int first, int last, int x) 
{ 
    while(first<=last)
    {
       int mid=first+(last-first)/2;
       
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
   int first = 0;
   int last = 1;
   while(x>arr[last]){
       last = last*2;
       first = last;
   }
	int res = binarySearch(arr, first,last,x);

     (res == -1 ) ? cout << -1 : cout << res; 
}   
