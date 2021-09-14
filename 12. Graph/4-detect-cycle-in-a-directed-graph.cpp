// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    
    bool solve(int src, vector<int> &vec, vector<int> &order, vector<int> adj[]){
        vec[src] = 1;
        order[src] = 1;
        
        for(auto x:adj[src]){
            if(!vec[x] && solve(x, vec, order, adj)) return true;
            else if(order[x]) return true;
        }
        
        order[src] = 0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> vec(V, 0);
        vector<int> order(V, 0);
        
        for(int i = 0; i < V; i++)
            if(!vec[i])
                if(solve(i, vec, order, adj)) 
                    return true;
            
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends