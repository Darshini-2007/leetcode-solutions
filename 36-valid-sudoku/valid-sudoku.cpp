class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={false};
        bool cols[9][9]={false};
        bool  boxes[9][9]={false};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int num=board[i][j]-'1';
                    int boxidx=(i/3)*3+(j/3);
                    if(row[i][num] || cols[j][num] || boxes[boxidx][num]) return false;
                    row[i][num]=cols[j][num]=boxes[boxidx][num]=true;
                }
            }
        }
        return true;
    }
};