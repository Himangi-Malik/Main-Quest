#include<iostream>
using namespace std;

long long int sqroot(int x)
    {
        int s=0;
        int e = x;
        long long int mid = s + (e-s)/2;
        long long int ans;


        while(s<=e){
            long long int sq= mid*mid;
            
            if(sq==x)
            return mid;

            if(sq<x){
                ans= mid;
                s=mid+1;
            }
            else
            e= mid -1;

            mid = s + (e-s)/2;
        }
        return ans;

    
    }

double morePrecision( int n, int precision, int tempSoln){
    double factor = 1;
    double ans = tempSoln;

    for(int i = 0; i< precision; i++)
    {
        factor = factor/10;
        for(double j= ans; j*j < n;)
        {
            ans = j;
            j = j+ factor;
        }

    }
    return ans;

}
int main()
{
    int n= 101;
    int tempSoln = sqroot(n);

    double ans =  morePrecision(n,3,tempSoln);
    cout << "answer is " << ans;
   

    
    return 0;

}
