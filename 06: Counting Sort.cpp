// Counting Sort : For positive integers having a key value
#include <bits/stdc++.h>     // T.C : O(n+k)
using namespace std;         // S.C : O(n+k)
int main(){
    int n, k=10;
    cin>>n;
    int a[n],b[n],c[k];
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=0;i<k;i++) c[i] =0;
    
    for(int j=0;j<n;j++) c[a[j]] = c[a[j]]+1 ;
   
     for(int i=1;i<k;i++)
     c[i] = c[i] + c[i-1] ;
     for(int j=n-1;j>=0;j--){
         b[c[a[j]]-1] = a[j];
         c[a[j]] = c[a[j]] - 1 ;
     }
     cout<<"Sorted array: ";
     for(int i=0;i<n;i++) cout<<b[i]<<" ";    
}

OR

// Counting Sort : For positive and negative integers having a key value
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
void countSort(vector<int>& arr) 
{ 
    int max = *max_element(arr.begin(), arr.end()); 
    int min = *min_element(arr.begin(), arr.end()); 
    int range = max - min + 1; 
  
    vector<int> count(range), output(arr.size()); 
    for (int i = 0; i < arr.size(); i++) 
        count[arr[i] - min]++; 
  
    for (int i = 1; i < count.size(); i++) 
        count[i] += count[i - 1]; 
  
    for (int i = arr.size() - 1; i >= 0; i--) { 
        output[count[arr[i] - min] - 1] = arr[i]; 
        count[arr[i] - min]--; 
    } 
  
    for (int i = 0; i < arr.size(); i++) 
        arr[i] = output[i]; 
} 
  
void printArray(vector<int>& arr) 
{ 
    for (int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
  
int main() 
{ 
    vector<int> arr = { -5, -10, 0, -3, 8, 5, -1, 10 }; 
    countSort(arr); 
    printArray(arr); 
    return 0; 
} 

OR

// Counting Sort : For a string  having a key value
#include <bits/stdc++.h>     
#include <string.h> 
using namespace std; 
#define RANGE 255 
  
void countSort(char arr[]) 
{ 
    char output[strlen(arr)]; 
  
    int count[RANGE + 1], i; 
    memset(count, 0, sizeof(count)); 
  
    for (i = 0; arr[i]; ++i) 
        ++count[arr[i]]; 
  
    for (i = 1; i <= RANGE; ++i) 
        count[i] += count[i - 1]; 
  
    for (i = 0; arr[i]; ++i) { 
        output[count[arr[i]] - 1] = arr[i]; 
        --count[arr[i]]; 
    } 
  
    
    for (i = 0; arr[i]; ++i) 
        arr[i] = output[i]; 
} 

int main() 
{ 
    char arr[] = "WorkHard"; 
    countSort(arr); 
  
    cout << "Sorted character array is " << arr; 
    return 0; 
} 
