#include<iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;
    int pages;


};

int main(){

    Book book1; 
    book1.title = "Norwegian Wood";
    book1.author = "Murakami";

    cout << "A really great book is " << book1.title;
    return 0;
}
