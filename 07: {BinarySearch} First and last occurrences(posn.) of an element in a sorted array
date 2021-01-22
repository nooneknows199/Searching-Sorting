// By using lower and upper bound:
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)  cin>>a[i];
    int idx1 = lower_bound(a,a+n,x) - a ;
    int idx2 = upper_bound(a,a+n,x) - a-1 ;
    if(idx1 == n) cout<<"-1\n";
    else cout<<idx1<<" "<<idx2<<endl;
}
}

OR

// By using BINARY SEARCH :
#include <bits/stdc++.h>
using namespace std;

int solve1(int a[],int n,int x,int tog){
    int first=0;
    int last=n-1;
    int ans = -1;
    while(first<=last){
    int  middle = first+(last-first)/2;
    
        if (a[middle]>x)
         last = middle - 1;
		
		else if (a[middle]<x)
            first=middle+1;
		else
		{
			 ans = middle;
			 if(tog ==-1) last = middle + tog;
			 else  first = middle + tog ;
		}
	}
	return ans;
}

int main() {
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)  cin>>a[i];
    int idx1 = solve1(a,n,x,-1);
    int idx2 = solve1(a,n,x,1);
    if(idx1 == n) cout<<"-1\n";
    else cout<<idx1<<" "<<idx2<<endl;
}

}
