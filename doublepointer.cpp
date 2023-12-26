
#include<iostream>
using namespace std;



int main()
{
   int i = 5;
   int *p = &i;
   int **p2 = &p;

   cout << "address of p " << &p << endl;
   cout << "address of i " << p << endl;
   cout << "value of i " << *p << endl;
   cout << "address of p " << p2 << endl;
   cout << "address of p2 " << &p2 << endl;
   cout << "VALUE OF P/ address of i " << *p2 << endl;
   cout << "value of i " << **p2 << endl;
   cout << "value of p2/ address of p " << *(&p2) << endl;



    return 0;

}
