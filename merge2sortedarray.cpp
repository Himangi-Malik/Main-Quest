#include<iostream>
using namespace std;

void output(int arr[], int size){
    for(int i=0; i<size; i++)
     cout << arr[i] <<" ";
}

void merge(int arr1[], int n, int arr2[], int m) 
{
    int arr3[n+m]={0};
    int i = 0, j=0, k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]= arr1[i];
            i++;
        }
        
        else if(arr1[i]<=arr2[j])
        {
            arr3[k]= arr1[i];
            i++; j++;
        }

        
        else if(arr1[i]>arr2[j])
        {
            arr3[k]= arr2[j];
            j++;
        }
        k++;
    
    }
    //ek baar sab ho gye ab bas koi ek array reh gya hoga jiski length zyada thi types
    while(i<n)
    arr3[k++]=arr1[i++];

    while(j<m)
    arr3[k++]= arr2[j++];

    output(arr3, n+m);
    //ek element repeated tha so ek zero aayega end mein hehe

}


int main()
{
    int arr1[] = {1,4,5};
    int arr2[]= {2,3,4,9,10};
    merge(arr1, 3, arr2 , 5);
   

    
    return 0;

}
