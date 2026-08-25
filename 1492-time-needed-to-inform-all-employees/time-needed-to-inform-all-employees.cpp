class Solution {
public:
int dfs(int cur,vector<vector<int>>& adj,vector<int>& informTime){
    int maxtime=0;
    for(auto it:adj[cur]){
        maxtime=max(maxtime,dfs(it,adj,informTime));
    }
    return informTime[cur]+maxtime;
}
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            if(manager[i]!=-1)
            {
                adj[manager[i]].push_back(i);
            }
        }
        return dfs(headID,adj,informTime);
    }
};