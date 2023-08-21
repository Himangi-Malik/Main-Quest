//iss mein kya alag kiya hai jo maine nhi kiya,iss mein variable bhi kam hai and return s kyun ho rha 
//ek baar check karna ache se thanks

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e = arr.size() - 1;

        int mid= s + (e-s)/2;
        

        while(s<e)
        {
            

           if(arr[mid]< arr[mid+1])
            s= mid+1;

            else if (arr[mid]> arr[mid+1])
            e = mid;

            mid= s + (e-s)/2;
        }
        return s;
        
    }
};
