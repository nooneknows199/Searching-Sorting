#include<iostream>               //  T.C : O(n logn) / O(n^2)
using namespace std;             //  S.C : O(n logn) 
void QuickSort(int[],int,int);
int Partition(int[],int,int);

int main(){
    
    int n,i,a[50],j;
    cout<<"enter the array size: ";
    cin>>n;
    cout<<"enter array elements:\n";
    for(i=0;i<n;i++)
      cin>>a[i];
    
    QuickSort(a,0,n-1);
    cout<<"sorted list using quick sort is: ";
    for(i=0;i<n;i++)
      cout<<a[i]<<" ";
      
    return 0;
}

void QuickSort(int a[],int lb,int ub){
     
    if(lb<ub){
     int p = Partition(a,lb,ub);
      QuickSort(a,lb,p-1);
      QuickSort(a,p+1,ub);
} 
}

int Partition(int a[],int lb,int ub)
{
    int pivot = a[ub];
    int pindex = lb;
   
   for(int i = lb;i<ub;i++){
       if(a[i]<pivot){
           swap(a[i],a[pindex]);
           pindex++;
       }
}

swap(a[pindex],a[ub]);
return pindex;
}
