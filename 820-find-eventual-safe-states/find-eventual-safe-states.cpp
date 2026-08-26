class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> in(n);
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            for(auto node:graph[i]){
                adj[node].push_back(i);
                in[i]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(in[i]==0){
                q.push(i);
            }
        }
        vector<bool> safe(n);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safe[node]=true;
            for(auto& neighbor:adj[node]){
                in[neighbor]--;
                if(in[neighbor]==0){
                    q.push(neighbor);
                }
            }
        }
        vector<int> safeNodes;
        for(int i=0;i<n;i++){
            if(safe[i]){
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};