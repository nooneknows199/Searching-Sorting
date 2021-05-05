#include<bits/stdc++.h>         // BUBBLE SORT
using namespace std;       // T.C : O(n) / O(n^2)
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(arr[j], arr[j+1]);
           swapped = true;
        }
     }
  
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}

int main(){

int n,arr[50],j;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
bubbleSort(arr, n);
cout<<"sorted list is :\n";
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
