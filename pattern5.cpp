#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    

    for(int row =1; row<n; row++)
    {
        //print triangle 1
        for(int i=1; i<=n-row+1; i++)
        cout<< i;
        
        //print triangle 2
        for(int i=row-1 ; i>0; i--)
        cout<< "**";

        // print triangle 3
        for(int j= n-row+1; j>0; j--)
        cout << j;
        cout << endl;
    }
    

    


    return 0;
}