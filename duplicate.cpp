#include<iostream>
using namespace std;

void input(int arr[], int size)
{
    cout << "enter elements" << endl;
    for(int i=0; i<size; i++)
    cin >> arr[i];
}

int sum(int arr[], int size){
    int arrsum= 0;

    for(int i=0; i<size; i++)
    arrsum += arr[i];
    return arrsum;
}

void xorapp(int arr[], int size)
{
    int ans = 0;
    for (int i =0; i<size ; i++)
    ans = ans^arr[i];

    for (int i =0; i<size ; i++)
    ans = ans^i;

    cout<< "duplicate element is "<< ans; 


}



int main()
{
    int arr[100];

    int size;
    cin >> size;
    input(arr, size);

    int sum1= (size-1)*(size)/2;
    cout << " sum is "<< sum1 << endl;
    int arrsum= sum(arr, size);
    cout << "arr sum is "<< arrsum << endl;

    int duplicate = arrsum - sum1;
    cout << "duplicate element is "<< duplicate << endl;

    //using xor
    xorapp(arr, size);
    return 0;

}
