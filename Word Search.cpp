class Solution {
public:
    bool found(vector<vector<char>>& board, int i,int j, string word, int pos)
    {
        if(pos==word.length())
        {
            return true;
        }
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size())
        {
            return false;
        }
        if(word[pos]!=board[i][j])
        {
            return false;
        }
        char temp = board[i][j];
        board[i][j]='*';
        if(found(board,i+1,j,word,pos+1)||
            found(board,i-1,j,word,pos+1) ||
            found(board,i,j+1,word,pos+1) ||
            found(board,i,j-1,word,pos+1))
            {
                return true;
            }
            board[i][j]=temp;
            return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(word[0]==board[i][j] and found(board,i,j,word,0))
                {
                    return true;
                }
            }
        }
        return false;
        
    }
};
