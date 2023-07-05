class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<char>> visited = mat;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    if(mat[i][j] == 'O')
                    {
                        visited[k][j] = 'X';
                    }
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                for(int k = 0; k < m; k++)
                {
                    if(mat[i][j] == 'O')
                    {
                        visited[i][k] = 'X';
                    }
                }
            }
        }

        return visited;
    }
};
