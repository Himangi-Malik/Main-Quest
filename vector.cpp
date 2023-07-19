#include<iostream>
#include<vector>
 
using namespace std;

int main()
{
    vector <int> v;
    cout << " Size is "<< v.size() << endl;
    cout << "Capacity is "<< v.capacity() << endl;

    v.push_back(1);
    cout << " Size is "<< v.size() << endl;
    cout << "Capacity is "<< v.capacity() << endl;

     v.push_back(1);
    cout << " Size is " <<v.size() << endl;
    cout << "Capacity is "<< v.capacity() << endl;

    
    v.push_back(8);
    cout << " Size is "<< v.size() << endl;
    cout << "Capacity is " <<v.capacity() << endl;

    
    v.push_back(12);
    cout << " Size is " << v.size() << endl;
    cout << "Capacity is "<< v.capacity() << endl;

    v.resize(5);
    cout << " Size is "<< v.size() << endl;
    cout << "Capacity is "<< v.capacity() << endl;

    v.pop_back();
    v.pop_back();
    cout << " Size is "<< v.size() << endl;
    cout << "Capacity is "<< v.capacity() << endl;



    return 0;
}


