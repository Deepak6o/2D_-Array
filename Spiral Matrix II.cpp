class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n,0));
        int sr=0;
        int er=n-1;
        int sc=0;
        int ec=n-1;
        int count=1;
        int temp=n*n;
        while(count<=temp)
        {
            for(int i=sc;count<=temp,i<=ec;i++)
            {
                matrix[sr][i]=count++;
            }
            sr++;
            for(int i=sr;count<=temp,i<=er;i++)
            {
                matrix[i][ec]=count++;
            }
            ec--;
            for(int i=ec;count<=temp,i>=sc;i--)
            {
                matrix[er][i]=count++;
            }
            er--;
            for(int i=er;count<=temp,i>=sr;i--)
            {
                matrix[i][sc]=count++;
            }
            sc++;
        }
        return matrix;
    }
};
