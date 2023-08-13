//kuch to bedagarak kiya maine, cuz kuch indexing ki dikkat bhi bta rha tha chatgpt
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
   cout<<endl;
}
bool uniqueOccurrences(int arr[], int size)
 {

       int count[100] = {0};
        
        for(int i =0; i<size; i++)
        {
            while(arr[i]!= -1001)
            {
            for(int j =i+1; j<size; j++)
            {
                if (arr[i]==arr[j])
                {
                   count[i]++;
                   arr[j]= -1001;
                }
            }
            }
        }
        output(arr, size);
        output(count, size);
        for(int i=0; i<size; i++)
        {
            for(int j= 0; j<size; j++)
            {
                if (count[i]==count[j])
                return false;
            }
        }
        return true;
 }



int main()
{
    int arr[100];
    
    cout << "enter size"<< endl;
    int size;
    cin >> size;
    input(arr, size);
    uniqueOccurrences(arr,size);
    
    return 0;

}

lass Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       int count[100];
        int size = arr.size();
        for(int i =0; i<size; i++)
        {
            while(arr[i]!= -1001)
            {
            for(int j =i+1; j<size; j++)
            {
                if (arr[i]==arr[j])
                {
                   count[i]++;
                   arr[j]= -1001;
                }
            }
            }
        }
        for(int i=0; i<size && count[i]!=0; i++)
        {
            for(int j= 0; j<size; j++)
            {
                if (count[i]==count[j])
                return false;
            }
        }
        return true;
    }
};
