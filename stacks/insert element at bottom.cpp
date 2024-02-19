#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    int length = myStack.size();
    int array[length] = {};

    for(int i = 0; i< length; i++)
    {
        array[i] = myStack.top();
        myStack.pop();
    }

    myStack.push(x);

    for(int i = length-1; i>=0;i-- )
    {
        myStack.push(array[i]);
    } 

    return myStack;

}
