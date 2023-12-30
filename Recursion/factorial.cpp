#include<iostream>
using namespace std;

int factorial(int n)
{
    
    //sabse pehle base case mention and define karna hota hai
    if(n==0)
    return 1;
    return (n*factorial(n-1));

}

int main()
{
    int n = 5;
    int ans = factorial(n);

    cout << ans << endl;


    return 0;

}
