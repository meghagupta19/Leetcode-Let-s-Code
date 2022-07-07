class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        vector<bool>visited(n,0);
        visited[source]=1;
        for(auto i:edges)
        {
           adj[i[0]].push_back(i[1]);
           adj[i[1]].push_back(i[0]);
        }
        DFS(adj,visited,source);
        return visited[destination];
        
    }
    void DFS(vector<vector<int>>&adj, vector<bool>&visited, int s)
    {
        for(int u: adj[s])
        {
            if(visited[u]==false)
            {
                visited[u]=true;
                DFS(adj,visited,u);
            }
        }
    }
};