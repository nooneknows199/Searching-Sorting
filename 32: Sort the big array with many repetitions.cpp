#include<bits/stdc++.h>    // T.C : O(n log n)
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];      // {100, 12, 100, 1, 1, 12, 100, 1, 12, 100, 1, 1}

    map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;

    int index = 0;
    for(auto &i : mp){
        while(i.second--)
            arr[index++] = i.first;
    }
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";    //  {1, 1, 1, 1, 1, 12, 12, 12, 100, 100, 100, 100}
}
