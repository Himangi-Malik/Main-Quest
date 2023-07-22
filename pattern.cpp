#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row =1; row <=n ; row++)
    {
        int i= row;
        for(int col=0; col<row; col++)
        {
            cout<<i<<" ";
            i++;
        }
        cout << endl;

       
    }
}