// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n){
        int i = 0, j = n - 1;
    
        while(i < j){
            if(arr[i] > 0 && arr[j] < 0){
                swap(arr[i], arr[j]);
                i++;
                j--;
            } 
            if(arr[i] > 0 && arr[j] > 0) j--;
            if(arr[i] < 0 && arr[j] < 0) i++;
            if(arr[i] < 0 && arr[j] > 0){
                i++;
                j--;
            }
        }
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends