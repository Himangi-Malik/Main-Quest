class Solution {
public:
    bool checkequal(int arr1[26] ,int arr2[26])
    {
        for(int i = 0; i< 26; i++){
        if (arr1[i] != arr2[i])
           return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        //create char array count 
        int arr1[26] = {0};
        for(int i = 0; i< s1.length(); i++)
        {
            int index = s1[i] - 'a';
            arr1[index] ++;
        }
        // create a window 
        int i = 0;
        int window_size = s1.length() ;
        int arr2[26] = {0};
        // ek baar chalaya hai first window form karne ke liye
        while(i < window_size && i< s2.length())
        {
            int index = s2[i] - 'a';
            arr2[index]++;
            i++;
        }

        if (checkequal(arr1, arr2))
        return 1;

        // window ko aage process karna hai to traverse the entire array
        while(i<s2.length())
        {
            //aage waala character daala
            char newchar = s2[i];
            int index = newchar - 'a';
            arr2[index]++;
            
            //peeche last waala char remove kiya
            char niklachar = s2[i-window_size];
            index = niklachar - 'a';
            arr2[index]--;

            if (checkequal(arr1, arr2))
            return 1;
            i++;
        }
        return 0;
        
  
    
    }
};
