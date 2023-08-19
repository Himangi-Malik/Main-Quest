#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid= (start+ end)/2;
    
    while(start <= end)
    {
        if (arr[mid]==key)
        return mid;

        //right part mein jaana
        if(arr[mid] < key)
        start = mid+1;

        //left waale part mein jaana
        if(arr[mid]> key)
        end = mid-1;

        mid = (end+start)/2;

        
    }
    return -1;
}

int main()
{
    int arr[]= {1,2,3,4,5,8,10,12,18,25};
    int index = binarysearch(arr,10,2);

    cout << "element is at "<< index;

    
    return 0;

}
