#include<iostream>
using namespace std;

int getmax(int arr[], int size)
{
   int max = arr[0];
   for(int i=0; i<size; i++)
   {
    if (arr[i]>max)
    max = arr[i];
   }

   return max;
}

int getmin(int arr[], int size)
{
     int min = arr[0];
   for(int i=0; i<size; i++)
   {
    if (arr[i]<min)
    min = arr[i];
   }

   return min;
}


int main()
{
   // initialize all locations with 0
   int four[10]= {0};

   // initialize all locations with 1 not possible
   int five[10]= {1};

   //max min in an arrray
   int size;
   cin>> size;

   int num[100];

   for (int i=0; i< size; i++)
   cin >> num[i];

   int max = getmax(num,size);
   int min = getmin(num,size);

   cout << "max element is " << max<< endl;
   cout << "min element is " << min<< endl;

    
    return 0;

}
