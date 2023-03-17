class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int ri=0;
        int ci=col-1;

        while(ri<row and ci>=0)
        {
            int element = matrix[ri][ci];
            if(element == target)
            {
                return 1;
            }
            else if(element<target)
            {
                ri++;
            }
            else
            {
                ci--;
            }
        }

        return 0;

        
    }
};
