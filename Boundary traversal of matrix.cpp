class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int> ans;
        int sr=0;
        int sc=0;
        int er=n-1;
        int ec=m-1;
        
        if(n==1)
        {
            for(int i=0;i<m;i++)
            {
                ans.push_back(matrix[0][i]);
            }
            return ans;
        }
        if(m==1)
        {
            for(int i=0;i<n;i++)
            {
                ans.push_back(matrix[i][0]);
            }
            return ans;
        }
        
        for(int i=sc;i<=ec;i++)
        {
            ans.push_back(matrix[sr][i]);
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            ans.push_back(matrix[i][ec]);
        }
        ec--;
        for(int i=ec;i>=sc;i--)
        {
            ans.push_back(matrix[er][i]);
        }
        er--;
        for(int i=er;i>=sr;i--)
        {
            ans.push_back(matrix[i][sc]);
        }
        
        return ans;
    }
};
