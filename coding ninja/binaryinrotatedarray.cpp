int getpivot(vector<int> arr , int size)
{
    int s=0;
    int e= size -1;
    int mid = s + (e-s)/2;
   

    while(s<e){
        
      
        if (arr[mid] >= arr[0])
        s = mid+1;

        else 
        e= mid;

        mid = s+  + (e-s)/2;
       
    }
    return s;
}

int binarysearch(vector <int> arr, int s, int e, int key)
{
    int start = s;
    int end = e;
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

int search(vector<int>& arr, int n, int k)

{
    int pivot = getpivot(arr, n);

    if(arr[pivot] >= k && arr[0]<= k)
    return binarysearch(arr, 0, pivot , k);
    
    else
    return binarysearch(arr,  pivot ,n-1,  k);
}
