#include<iostream>
using namespace std;

int ap(int n)
{
    int b = 3*n + 7;
    return b;
}

int main()
{
    int n;
    cin>> n;

    int ans = ap(n);
    cout << ans;
   

    
    return 0;

}
