int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
    int sum = ((n-1)*(n))/2;
    int arrsum=0;

    for(int i =0; i< n; i++)
    arrsum = arrsum +arr[i];


    int element =arrsum - sum;
    return element;
}
