#include<bits/stdc++.h>               //  T.C : O(n logn) 
using namespace std;                 //  S.C : O(n logn) 
void shuffle(int[],int,int);
void QuickSort(int[],int,int);
int Partition(int[],int,int);

int main(){
    
    int n,i,a[50],j;
    cout<<"enter the array size: ";
    cin>>n;
    cout<<"enter array elements:\n";
    for(i=0;i<n;i++)
      cin>>a[i];
      
      shuffle(a,0,n-1);
      cout<<"Shuffled array: ";
    for(i=0;i<n;i++)
      cout<<a[i]<<" ";
      cout<<endl;
      
    QuickSort(a,0,n-1);
    cout<<"sorted list using quick sort is: ";
    for(i=0;i<n;i++)
      cout<<a[i]<<" ";
      
    return 0;
}

void shuffle(int a[],int lb,int ub){
    srand(time(NULL));
    int i,j,temp;
    for(int i=ub;i>0;i--){
        j = rand()%(i+1);
        swap(a[i],a[j]);
    }
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
