//doesnt work for 2,1,-1

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


    int pivotIndex(int nums[], int size) {
        int s = 0;
        int e = size;
        int mid = s+ (e-s)/2;

       

        while(s <= e)
        {
             int leftsum = 0;
            int rightsum  = 0;
           
            
            cout << "mid is "<< mid;
            

           for(int i = 0; i<mid; i++)
           leftsum += nums[i];

           cout <<" " << leftsum; 
           for(int i = mid+1; i< size; i++)
           rightsum += nums[i];

            cout << " " <<rightsum ;
            
        
           if(leftsum==rightsum)
           return mid;

           if(leftsum < rightsum)
           e = mid-1;

           if(leftsum > rightsum)
           s= mid+1;
           

           mid = s+ (e-s)/2;
           cout << endl;
        }
        return -1;
    }




int main()
{
    int arr[]=  {2,1,-1};
    int size = 3;

    int pivot = pivotIndex(arr, size);
    cout << pivot;

    return 0;

}
