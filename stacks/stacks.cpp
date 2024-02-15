//mera kaam karne ka bilkul  mood nhi hai, why am i even studying
//installation ki maa ki chut jaise agar pull requests aap daal rhe ho to aap pe lahnat hai
//also shukar hai meri typing speed kaafi achi hai nhi to maine marr jaana tha
//itna code kaise hi likha jaata agar meri typing speed hi bahut kam ho to


#include<iostream>
#include <stack>
using namespace std;

class Stack{
    //properties
    public: 
    int *arr;
    int top;
    int size;

    //constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(top < size-1)
        {
            top++;
            arr[top] = element;
        }
        else
        cout << "stack overflow" << endl;

    }

    void pop(){
        if(top >-1)
        .. aisa kardo 

    }

    int peek(){
        yeh bhi asaan hai mai nhi kar rhi thanks
    }

    bool isEmpty(){

    }
    
}


int main()
{
    //creation of stack
    stack <int> s;

    s.push(2);

    return 0;

}
