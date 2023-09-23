//first approach brute method
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m; int j=0;
        while(m< nums1.size())
         nums1[m++]= nums2[j++];
         
        sort(nums1.begin(), nums1.end());
    
        
    }
};

//two pointer appraoch
