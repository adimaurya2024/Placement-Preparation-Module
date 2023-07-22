class Solution {
public:
    vector<int>gen_row(int row)    // function to find elements for one row
    {
        vector<int>rowAns;
        long long ans= 1;
        rowAns.push_back(1);
        for(int col=1; col<row; col++)
        {
            ans = ans * (row- col);
            ans = ans / col;
            rowAns.push_back(ans);
        }
        return rowAns;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        vector<int>sol;
        //Iterate the gen_row funtion for finding the elements for first r<=numRows
        for(int r= 1; r<=numRows; r++ )
        {
            sol = gen_row(r);
            res.push_back(sol);
        }
        return res;
        
    }
};
