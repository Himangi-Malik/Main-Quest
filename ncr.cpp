#include<iostream>
using namespace std;
 
int factorial(int num){
    int answer=1;
    for(int i= num; i>1; i--)
    answer = answer *i;

    return answer;
}

int nCr(int n, int r)
{
    int factn =  factorial(n);
    int factr =  factorial(r);
    int facta=  factorial(n-r);

    int ans = factn / (factr * facta);
    return ans; 


}

int main()
{
   int n;
   cin >> n;

   int r;
   cin >> r;

   int pakak = nCr(n,r);
   cout << pakak;


    
    return 0;

}
