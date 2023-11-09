#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector <int> ans;
    for(int c = 0;c < mCols ; c++)
    {
        int r;
        
            if(c%2 == 0)
            {
                r=0;
              while (r < nRows) {
                
                ans.push_back(arr[r][c]);
                r++;
              }
            }

            else{
                r = nRows-1;
                while(r>=0)
                {
                   
                    ans.push_back(arr[r][c]);           
                    r--;
                }

            }

       
    }
    return ans;
}
