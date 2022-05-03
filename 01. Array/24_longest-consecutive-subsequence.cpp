// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        unordered_map<int, int> mp;
        int max_size = 0, max_size_temp = 0;
        for(int i = 0; i < n; i++) mp[arr[i]]++;
        
        for(int i = 0; i < mp.size() - 1; i++){
            if(mp[i] > 0 && mp[i + 1] > 0) max_size_temp++;
            if((mp[i] == 0 && mp[i + 1] > 0) || (mp[i] > 0 && mp[i + 1] == 0)) max_size_temp = 0;
            max_size = max(max_size, max_size_temp);
        }
        
        return max_size + 1;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends