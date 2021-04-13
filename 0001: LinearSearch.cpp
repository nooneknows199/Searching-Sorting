#include<iostream>           // Linear search
using namespace std;         // O(n)

int main(){
int i,num,n,pos=0;
int arr[n];
cout<<"enter the array size :";
cin>>n;
cout<<"enter elements of array:";
for(i=0;i<n;i++)
    cin>>arr[i];
cout<<"enter the search element:";
cin>>num;
for(i=0;i<n;i++)
{
    if(arr[i]==num)
    {
        cout<<"\nelement found successfully!!";
        pos=i;
        cout<<"\nelement="<<num<<"\n position=a["<<pos<<"]";
        break;
    }
}

if(arr[i]!=num)
{
    cout<<"\nelement not found!!!\n ";
}

return 0;

}
