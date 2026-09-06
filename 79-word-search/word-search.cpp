class Solution {
public:
    bool dfs(int r,int c,int idx,vector<vector<bool>>&vis,vector<vector<char>>& board,string& word){
        if(idx >= word.size()) return true;
        if(r>=board.size() || r<0 || c>=board[0].size() || c<0 || vis[r][c]==true || board[r][c]!=word[idx]) return false;
        vis[r][c]=true;
        bool l=dfs(r,c-1,idx+1,vis,board,word);
        bool righ=dfs(r,c+1,idx+1,vis,board,word);
        bool u=dfs(r-1,c,idx+1,vis,board,word);
        bool d=dfs(r+1,c,idx+1,vis,board,word);
        vis[r][c]=false;
        return (l||righ||u||d);
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                 if(dfs(i,j,0,vis,board,word))
                  return true;
                }
            }
        }
        return false;   
    }
};