#include <bits/stdc++.h>         // T.C : O(N^2)
using namespace std;             // S.C : O(N)
 
void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
int indexOf(vector<int> &arr, int ele)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == ele)
            return i;
    }
    return -1;
}
 
int minSwaps(vector<int> arr, int N)
{
    int ans = 0;
    vector<int> temp(arr.begin(),arr.end());
    sort(temp.begin(),temp.end());
     
    for(int i = 0; i < N; i++)
    {
         
        // This is checking whether the current element is at the right place or not
        if (arr[i] != temp[i])
        {
            ans++;
            // Swap the current element with the right index
            // so that arr[0] to arr[i] is sorted
            swap(arr, i, indexOf(arr, temp[i]));
        }
    }
    return ans;
}
 
int main()
{
    vector<int> a = {1,5,4,3,2};              
    int n = a.size();

    cout << minSwaps(a, n);
}
