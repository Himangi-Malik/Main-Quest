#include<iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;
    int pages;

    Book()
    {
        title = "pakak pak pak";
        author = "meow";
        pages=0;

    }

    Book ( string atitle, string aauthor , int apages)
    {
        atitle = title;
        aauthor = author;
        apages = pages;
    }

};

int main(){

    Book book1("Norwegian Wood","Murakami", 500);

    Book book2( "Thousand Splendid Suns","Khaled Housseni", 500);
    

    cout << "A really great book is " << book1.title;
    return 0;
}