#include<iostream>
using namespace std;

void reverse(int, int);

//meri approach
int main()
{
     int arr[100];

    int size;
    cin >> size;

    cout << "enter elements" << endl;
    for(int i=0; i<size; i++)
    cin >> arr[i];

    for(int i=0; i<=size/2; i++)
    {
        swap(arr[i],arr[size-i-1]);

    }
     for(int i=0; i<size; i++)
     cout << arr[i] <<" ";

 return 0;

}

//babbar approach
/*
void reverse(int arr[], int n )
{
   int start = 0;
   int end = n-1;

   while(start < end)
   swap(arr[s],arr[e])
   start++
   end--
}
*/