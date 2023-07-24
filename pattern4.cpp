#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    

    for(int row =1; row<n; row++)
    {
        //print space
        for(int space = n-row; space > 0; space--)
        cout<< " ";
        
        //print triangle 1
        for(int i=1 ; i<= row ; i++)
        cout<< i;

        // print triangle 2
        for(int j= row+1; j>0; j--)
        cout << j;
        cout << endl;
    }
    

    


    return 0;
}