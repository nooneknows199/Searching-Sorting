#include<iostream>         // BUBBLE SORT
using namespace std;       // T.C : O(n) / O(n^2)
int main(){
int n,i,arr[50],j,temp;
cout<<"enter the array size: ";
cin>>n;
cout<<"enter array elements:\n";
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<(n-1);i++)
{
for(j=0;j<(n-i-1);j++)
{
    if(arr[j]>arr[j+1])
    swap(arr[j], arr[j+1]);

}
}
cout<<"sorted list is :\n";
for(i=0;i<n;i++)
cout<<arr[i]<<" ";

}
