#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int answer = 0;

    for(int i=0; n>0; i++)
    {
        int bit = n&1;
        
        answer = answer + pow(10,i);
        n = n>>1;
    }
    cout << answer;
}