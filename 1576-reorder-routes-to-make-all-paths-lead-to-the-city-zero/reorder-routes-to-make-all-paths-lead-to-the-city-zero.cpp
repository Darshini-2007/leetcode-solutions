class Solution {
public:
    int dfs(vector<vector<int>> &g,vector<bool>&vis,int from){
        auto change=0;
        vis[from]=true;
        for(auto to:g[from]){
            if(!vis[abs(to)])
              change+=dfs(g,vis,abs(to))+(to>0);
        }
        return change;
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> g(n);
        for(auto &c:connections){
            g[c[0]].push_back(c[1]);
            g[c[1]].push_back(-c[0]);
        }
        return dfs(g,vector<bool>(n)={},0);
    }
};