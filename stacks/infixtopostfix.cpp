		 else if (exp[i] == '^' || exp[i] == '*' || exp[i] == '/') {
            while (!st.empty() && (st.top() == '^' || st.top() == '*' || st.top() == '/')) {
                ans.push_back(st.top());
                st.pop();
            }
            st.push(exp[i]);
        } 
