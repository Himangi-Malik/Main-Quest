#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int answer=0;

    for(int i=0; n>0; i++)
    {
        int digit = n%10;

        if(digit==1)
        answer += pow(2,i);

        n=n/10;
    }
    cout<<answer;

    
    return 0;

}
