//kara maine switch se nhi but koi na
#include<iostream>
using namespace std;

int main()
{
    int money = 1330;
    int r100 = 0;
    int r50 = 0;
    int r20 = 0;
    int r10 = 0;

   while (money != 0)
   {
   
       if(money % 100 == 0){ r100++;
        money = money - 100;}
        

        else if (money % 50 == 0) { r50++;
        money = money - 50;}
        

        else if (money % 20 == 0) { r20++;
        money = money - 20;}
        

        else if (money % 10 == 0) {r10++;
        money = money - 10;}
    

    }
   
   cout << "100 notes are: " << r100 << endl;
   cout << "50 notes are: " << r50 << endl;
   cout << "20 notes are: " << r20 << endl;
   cout << "10 notes are: " << r10 << endl;

    
    return 0;

}
