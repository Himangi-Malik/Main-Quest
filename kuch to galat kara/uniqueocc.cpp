//i have no clue what i was doing here pakak
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

        for(int i=0; i<size; i++)
        {
            for(int j=i; j<size;j++)
            {
                if(arr[i]==arr[j])
                { 
                     count[i]++;
                     //bas arr[j] ko kisi tarah delete karna hai
                     arr[j]= - 1001;
                }
            }
        }
        output(count, size);


        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size;j++)
            {
                if (count[i]==count[j] && count[i]!=1)
                return false;
            
            }
        }
        return true;
        
    }


int main()
{
    int arr[100];

    cout << "enter size of array "<< endl;
    int size;
    cin >> size;
    input(arr, size);

    bool ans= uniqueOccurrences(arr,size);

    cout << "ans is " << ans << endl;
    
    return 0;

}
