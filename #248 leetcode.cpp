class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //iss mein binary search nhi laga hai, just optimised searching hai
        int row = matrix.size();
        int col = matrix[0].size();

        int r = 0;
        int c = col -1;

        while( r < row && c >= 0 )
        {
            int element = matrix[r][c];
            if(target == element)
            return 1;

            else if(target < element)
            c--;

            else 
            r++;
        }
        return 0;

    
    }
};
