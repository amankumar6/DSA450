#include<bits/stdc++.h>
using namespace std;
 
void morethanNbyK(int arr[], int n, int k)
{
    int x = n / k;

    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) mp[arr[i]]++;

    for(int i = 0; i < mp.size(); i++) if(mp[i] > k) cout << i << "\n";
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 1, 2, 2, 3, 5,
                  4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
     
    morethanNbyK(arr, n, k);
 
    return 0;
}