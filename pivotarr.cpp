#include<iostream>
using namespace std;

int getpivot(int arr[] , int size)
{
    int s=0;
    int e= size -1;
    int mid = s + (e-s)/2;
    int iteration = 0;

    while(s<e){
        cout << iteration << " " << arr[s] << " " <<  arr[e] << " " << arr[mid] << endl;
        if (arr[mid] >= arr[0])
        s = mid+1;

        else 
        e= mid;

        mid = s+  + (e-s)/2;
        iteration++;
    }
    return s;
}

int main()
{
   int arr[]= {12,15,34,56,78,123,876, 985,1,2,3,4,5,6};
   int size = sizeof(arr)/sizeof(int);

   int pivot = getpivot(arr, size);
   cout << "pivot is " << pivot;
    return 0;

}
