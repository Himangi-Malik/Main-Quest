// abhi iska runtime bahut zyada aa rha tha so ill have to see better solution too but bharat dhwani hai so hehe i am going rn
class Solution {
public:
    string removeDuplicates(string s) {
        int a;
        for(int i = 0; (i< s.length() - 1) && s.length() != 0;i++ )
        {
            
            if (s[i] == s[i+1])
            {
                int a = i-2;
                s.erase(i, 2);
                if(a<0)
                i = -1;
                else 
                i = a;

            }

           
            
        }
        return s;
        
    }
};
