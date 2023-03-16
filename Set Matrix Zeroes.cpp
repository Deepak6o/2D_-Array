class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int a=matrix.size();
        int b=matrix[0].size();

        vector<vector<int>> visited = matrix;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<b;k++)
                    {
                        visited[i][k]=0;
                    }
                }
            }
        }
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<a;k++)
                    {
                        visited[k][j]=0;
                    }
                }
            }
        }
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                matrix[i][j]=visited[i][j];
            }
        }
        
    }
};
