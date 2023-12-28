#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int sum = 0;

    //variable sixe array
    int *arr = new int[5];

    for(int i = 0; i<5; i++)
    cin >> arr[i];

    for(int i = 0; i<5; i++)
    sum = sum+ arr[i];

    cout << sum;
   

    
    return 0;

}
