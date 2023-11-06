class Solution {
public:
    string removeOccurrences(string s, string part) {
        string temp = "";
        int check = 0;
    
        for(int i = 0; i < s.length(); i++)
        {
            temp.push_back(s[i]);
        }

        for(int i = 0; i< s.length(); i++)
        {
            if(s[i] == part[0] )
            {
                int k = i;
                for(int j = 0; j< part.length() ; j++)
                {
                    if (s[k] == part[j])
                    check = 1;
                    else 
                    check = 0;
                    k++; 
                }
            }

        if (check)
        {
            for(int j = 0; j< part.length(); j++ ,i++)
            temp.pop_back();
        }
        check = 0; i=0;
        }

        return temp; 
    }
  
};
