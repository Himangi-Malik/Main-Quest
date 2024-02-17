#include <bits/stdc++.h> 
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   //remeber the length of stack is n+1
   int middle;
   //cout << middle << endl;
   if(N%2==0)
    middle = (N/2) + 1;

   else
   middle = (N+1)/2;

   vector <int> temp;

   for(int i = 0; i< (middle -1); i++){

      //cout << inputStack.top() <<endl;

      temp.push_back(inputStack.top());
      inputStack.pop(); 
   }

   //cout << inputStack.top() <<endl;
   inputStack.pop(); //middle element remove hogya

   for(int i = middle -2; i>=0; i-- ){
      inputStack.push(temp[i]);
   }
   


   
}
