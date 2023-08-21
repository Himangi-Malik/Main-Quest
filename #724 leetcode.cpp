// this is without using binary search i will write and edit program using binary search cuz uss mein mastery chahiye 
// thanks
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        totalSum += nums[i];
    }
    
    int leftSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
    }
    
    return -1;
           
      
    }
        
   
};
