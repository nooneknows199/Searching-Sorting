#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        long long low = *max_element(arr,arr+n);
        long long high = 0;
        for(int i=0;i<n;i++)
        high += arr[i];
        
        while(low<high){
            long long mid = low + (high-low)/2;
            long long painter = 1, t=0;
            for(int i=0;i<n;i++){
                t += arr[i];
                if(t>mid){
                    t = arr[i];
                    painter++;
                }
            }
            if(painter>k)
            low = mid+1;
            else
            high = mid;
           
        }
         return low;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
} 
