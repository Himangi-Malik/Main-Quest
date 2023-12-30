#include<iostream>
using namespace std;

int main()
{
   int n; int m; int count = 1;
   cout << "enter size of array" << endl;
   cin >> n;

   int **arr = new int*[n];
   for ( int i = 0; i<n; i++)
   {
    cout << " enter size of edge" << endl;5

    cin >> m;
     cout << " enter " << m << " elements " << endl;
    for(int j = 0; j<m; j++)
    {
       
        cin>> arr[i][j];

    }
    cout << " the number " << count << " line of array is " << endl;
     for(int j = 0; j<m; j++)
    {
       
        cout << arr[i][j] << " ";

    }
    cout << endl;
     



   }

  /* and agar iska leetcode jaise pe output nikalvana hai then vector bna ke m store kar lena count ka
   and uske hisaab se output nikal aayega aaram se */

   
    return 0;

}
