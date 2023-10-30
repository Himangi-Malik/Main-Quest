class Solution {

public:
 bool valid(char ch)
    {
        if((ch>= 'a' && ch<= 'z') || (ch>= 'A' && ch<= 'Z') || (ch>= '0' && ch<= '9') )
        return 1;
        else 
        return 0;
    }

    char lowercase(char ch)
    {
        if((ch>= 'A' && ch<= 'Z'))
        return(ch - 'A' + 'a');

        return ch;

    }

    bool check(string s)
    {
        int st = 0;
        int e = s.length()-1;

        while(st<=e)
        {
            if(s[st]!=s[e])
            return 0;

            st++;
            e--;
        }
        return 1;

    }

   
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i<s.length(); i++){
            if(valid(s[i]))
            temp.push_back(s[i]);
        }

        for(int i = 0; i<temp.length(); i++)
        temp[i] =  lowercase(temp[i]);

        return check(temp);  
    }
};
