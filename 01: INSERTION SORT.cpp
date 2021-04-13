#include<iostream>        // INSERTION SORT 
using namespace std;        //  T.C : 0(N) / O(N^2)
int main(){  
int n,i,arr[50],j,temp;
cout<<"enter the array size: ";
cin>>n;
cout<<"enter array elements:\n";
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=1;i<n;i++)
{
    temp=arr[i];
    j=i-1;
    while((arr[j]>temp)&&(j>=0))
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
}
cout<<"\nSorted list of array of integers using INSERTION SORT is:";
for(i=0;i<n;i++)
{
    cout<<" "<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
