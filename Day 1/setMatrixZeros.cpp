class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        //Take initial values as zero of row and column array
        int row[200] = {0};
        int col[200] = {0};
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j]==0)
                {
                    //replace zero with 1 of corresponding row and column
                    row[i]=1;
                    col[j]= 1;
                }
            }
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                //if row or column is equal to 1 then replace element corresponding to it in matrix with zero :
                if(row[i] || col[j])
                {
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};
