class Solution {
public:
    int m,n;
    vector<vector<int>> directions={{1,0},{-1,0},{0,1},{0,-1}};
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        n=heights.size();
        m=heights[0].size();
        vector<vector<bool>> pacific(n,vector<bool>(m,false));
        vector<vector<bool>> atlantic(n,vector<bool>(m,false));
        // Pacific
        for(int j = 0; j < m; j++)
            dfs(0, j, heights, pacific);       // top

        for(int i = 0; i < n; i++)
            dfs(i, 0, heights, pacific);       // left

        // Atlantic
        for(int j = 0; j < m; j++)
            dfs(n - 1, j, heights, atlantic);   // bottom

        for(int i = 0; i < n; i++)
            dfs(i, m - 1, heights, atlantic);  // right
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pacific[i][j] && atlantic[i][j]){
                    res.push_back({i,j});
                }
            }
        }
        return res;
        }
        void dfs(int i,int j,vector<vector<int>>& heights,vector<vector<bool>>& visited){
            visited[i][j]=true;
            for(auto& d:directions){
                int x=i+d[0],y=j+d[1];
                if(x<0 || x>=n || y<0 || y>=m) continue;
                if(visited[x][y]) continue;
                if(heights[x][y] < heights[i][j]) continue;
                dfs(x,y,heights,visited);
            }
        }
    
};