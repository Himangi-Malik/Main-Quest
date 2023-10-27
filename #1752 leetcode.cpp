class Solution {
public:
    bool check(vector<int>& nums) {
        int check = 0;
        for(int i =0; i < nums.size()-1; i++)
        {
            if(nums[i+1] < nums[i])
            check++;

        }
        if(nums[0]< nums[nums.size()-1])
        check++;

        if(check > 1)
        return false;

        return true;
    }
};
