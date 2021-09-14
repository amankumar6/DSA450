#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    vector<int> ans;
    
    void solve(int v, vector<bool> &vec, vector<int> adj[]){
        ans.push_back(v);
        vec[v] = true;
        for(auto it:adj[v]) if(vec[it] == false) solve(it, vec, adj);
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<bool> vec(V, false);
        solve(0, vec, adj);
        return ans;;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends