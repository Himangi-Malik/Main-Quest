#include<iostream>
using namespace std;

void input(int arr[], int size)
{
    cout << "enter elements" << endl;
    for(int i=0; i<size; i++)
    cin >> arr[i];
}

void output(int arr[], int size){
    for(int i=0; i<size; i++)
     cout << arr[i] <<" ";

}

void sort(int arr[], int size)
{
    int left = 0; int right = size-1;

    while(left < right){
        
        while(arr[left]==0 && left < right)
        left ++;

        while (arr[right]==1 && left < right)
        right--;

        //means arr[left] not 0 and arr[right] not one
        //matlb arr[left]=1 and arr[right]=0
        if( left < right)
        {
           swap(arr[left],arr[right]);
           left++;
           right--; 
        }


    }

   
}



int main()
{
    //int arr[100];
    
    //cout << "enter size"<< endl;
    //int size;
    //cin >> size;
    //input(arr, size);

    int arr[]= {1,1,0,0,0,0,1,0};
    int size = 8;
    sort(arr,size);
    output(arr,size);
    
    return 0;

}
