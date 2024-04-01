#include <stack>
string infixToPostfix(string exp){
	// Write your code here
	stack <char> st;
	string ans;
	//int precedence = 0;

	for(int i = 0; i<exp.length(); i++){
		cout << exp << endl;
		//cout << ans << endl;
		cout << st.top();

	
		if(exp[i] == '('){
			st.push(exp[i]);
		}

		else if(exp[i] == ')'){
	
			while(st.top() != '('){
				ans.push_back(st.top());
				st.pop();
			}
			st.pop(); //bacha hua ( yeh bhi pop ho jaaye)
			
		}

		else if(exp[i] == '^'){
		    st.push('^');
		}

		else if(exp[i]== '*' || '/'){
	        while (st.top() != '^' ||  '*' || '/' ){
				ans.push_back(st.top());
				st.pop();
			}
			ans.push_back(exp[i]);

		}

		else if(exp[i] == '+' || '-'){
			while (st.top() != '^' ||  '*' || '/' ||  '+' || '-'){
				ans.push_back(st.top());
				st.pop();
			}
			ans.push_back(exp[i]);


		}
		else
		ans.push_back(exp[i]);  //operand

		
	}
        while (!st.empty()) {
                ans.push_back(st.top());
                st.top();
        }
        return ans;
}
