#include<iostream>            // Selection Sort
using namespace std;         // O(n^2)
int main(){
int n,i,arr[50],j,min;
cout<<"\n enter the array size ";
cin>>n;
cout<<"\n enter array elements:\n";      // 45,14,2,78,6,69
for(i=0;i<n;i++){    
    cin>>arr[i];
}
 for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
         min = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min])  
            min = j;  
  
        // Swap the found minimum element with the first element  
        if(min!=i)
        swap(arr[min], arr[i]);  
    }  
cout<<"sorted list is: \n";
for(i=0;i<n;i++){
        cout<<arr[i]<<" " ;      //  2 6 14 45 69 78  
}
cout<<endl;

return 0;
}
