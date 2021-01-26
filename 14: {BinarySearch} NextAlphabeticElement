#include <bits/stdc++.h>          // T.C : O(log n)
using namespace std;
 
char nextGreatestAlphabet(vector<char>& alphabets, char K)
{
    int l = 0, r = alphabets.size() - 1;
 
    int ans = -1;
    while (l <= r) {
 
        int mid = (l + r) / 2;
        if (alphabets[mid] > K)
        {
            r = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
    }
    return alphabets[ans];
}

int main()
{
    vector<char> letters{ 'A', 'B', 'F','H' };
    char K = 'F';
 
    char result = nextGreatestAlphabet(letters, K);
    cout << result << endl;
    return 0;
}
