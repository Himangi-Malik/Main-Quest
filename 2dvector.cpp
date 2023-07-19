#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    vector <int> v1= {1,2};
    vector <int> v2= {4,5,6};
    vector <int> v3= {7,8,9,10};

    vector< vector <int>> V = {v1,v2,v3};
   // initialise 2d vector <vector <int>> V = (n, vector<int> (m));
 
    //vector <int> v (n); initialize vector

    for (int i=0; i< V.size(); i++) //v.size gives number of rows
    {
       for(int j=0; j< V[i].size(); j++)// v[i]th vector ka size return karega
       cout << V[i][j] << " ";
       cout << endl;
    }




   return 0;
}