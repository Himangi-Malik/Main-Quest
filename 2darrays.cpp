#include<iostream>
using namespace std;

int main()
{
    int arr1[3][4];
    int arr2[5][2] = {1,4,6,22,67,88,93,78,04,35};
    int arr3[3][4] = {{1,11,111,1111}, {2,22,222,2222},{3,33,333,3333}};

    for(int i=0; i<4; i++) 
    {
        for(int j=0; j<3; j++)
        cin>> arr1[i][j];
    }
     //column row wise waala
     for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        cout<< arr1[i][j]<< "  ";
        cout << endl;
    }
 // iss mein acha error aata
     for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        cout<< arr2[i][j]<< "  ";
        cout << endl;
    }
      // iss mein acha error aata
     for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        cout<< arr3[i][j]<< "  ";
        cout << endl;
    }
   cout<< "ab sab seedha seedha input waala" << endl;
   //okay iss mein pta nhi kyun garbage value aa rhi
     for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        cout<< arr1[i][j]<< "  ";
        cout << endl;
    }

     for(int i=0; i<5; i++)
    {
        for(int j=0; j<2; j++)
        cout<< arr2[i][j]<< "  ";
        cout << endl;
    }
     
     for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        cout<< arr3[i][j]<< "  ";
        cout << endl;
    }

    return 0;
    

}