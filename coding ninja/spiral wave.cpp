class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // 4 pointers pade hai and hamne 4 type ke traversal karne hai
        int rows = matrix.size();
        int column = matrix[0].size();
        vector <int> ans;
        int total = rows * column;
        int count = 0;

        // the 4 pointers
        int minr = 0, maxr = rows-1;
        int minc = 0, maxc = column-1;
        int r,c;

        while(count < total)
        {
            //row constant min waali and column traverse
            for(c=minc; c<=maxc && count < total; c++)
            {
                ans.push_back(matrix[minr][c]);
                count++;
            }
            minr++;

            // column constant max waala and row traverse
            for(r = minr; r <= maxr && count<total; r++)
            {
                ans.push_back(matrix[r][maxc]);
                count++;
            }
            maxc--;

            // row constant max waali and columns traverse
            for(c = maxc; c>= minc && count<total ; c--)
            {
                ans.push_back(matrix[maxr][c]);
                count++;
            }
            maxr--;

            // column constant min waala and row traverse
            for(r= maxr; r>= minr && count < total; r--)
            {
                ans.push_back(matrix[r][minc]);
                count++;
            }
            minc++;


        }
        return ans;

    }
};
