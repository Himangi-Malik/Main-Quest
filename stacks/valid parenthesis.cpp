//ISS MEIN LOVE BABBAR NE BAS  or (||) lga lga ke kiya tha aur kuch nhi hai iss mein

bool isValidParenthesis(string s)
{
    // Write your code here.yes sure i will do the pleasure of writing the code here thanks
    stack <char> st;
    st.push(s[0]);
    for(int i = 1; i< s.length();i++){
        char ch = s[i];
        
        if(s[i] == ']')
        {
            if(st.top() == '[')
            st.pop();
        }

        else if (s[i] == ')') {
            if (st.top() == '(')
            st.pop();
        }

        else if (s[i] == '}') {
            if (st.top() == '{')
            st.pop();
        } else
            st.push(ch);
    }
    //cout << st.top();
   // st.pop();
   // st.pop();
    
    //cout << st.top();
    //cout << st.top();
    //cout << st.top();
        


    if(st.empty())
    return true;

    else
    return false;

}
