#include<iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[100];

    cout << "enter elements" << endl;
    for(int i=0; i<size; i++)
    cin >> arr[i];

    for(int i=0;i<size-2; )
    {
        swap(arr[i], arr[i+1]);
        i=i+2;
    }
    
     for(int i=0; i<size; i++)
     cout << arr[i] <<" ";

    return 0;

}
