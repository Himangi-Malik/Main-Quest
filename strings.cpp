#include<iostream>

using namespace std;

int main()
{
    string phrase = "giraffe academy";

    cout<< phrase[0] << endl;

    phrase[8]='B';
    cout<< phrase << endl;

    cout<< phrase.find("emy",4) <<endl;  //starting search from index
    cout<< phrase.substr(6,5);  //starting index and length
    
    return 0;

}