#include <stack>

string infixToPostfix(string exp){

    stack<char> st;
    string ans;

    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '(') {
            st.push(exp[i]);
        } 
		
		else if (exp[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                ans.push_back(st.top());
                st.pop();
            }
            if (!st.empty()) // To handle the case when there's no matching '('
                st.pop();
        }
		
		 else if (exp[i] == '^') {
            while (!st.empty() && (st.top() == '^' ) ){
                ans.push_back(st.top());
                st.pop();
            }
            st.push(exp[i]);
        } 

			else if (exp[i] == '*' || exp[i] == '/') {
            while (!st.empty() && (st.top() == '^' || st.top() == '*' || st.top() == '/')) {
                ans.push_back(st.top());
                st.pop();
            }
            st.push(exp[i]);
        } 
		
		else if (exp[i] == '+' || exp[i] == '-') {
            while (!st.empty() && (st.top() == '^' || st.top() == '*' || st.top() == '/' || st.top() == '+' || st.top() == '-')) {
                ans.push_back(st.top());
                st.pop();
            }
            st.push(exp[i]);
        }
		
		 else {
            ans.push_back(exp[i]);  // Operand
        }
    }
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
