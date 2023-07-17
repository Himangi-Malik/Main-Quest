#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    string major;
    double cgpa;

    Student(string x, string y, int z)
    {
        x = name;
        y = major;
        z = cgpa;
    }

    bool hasHonours()
    {
        if(cgpa > 8)
        return true;

        else 
        return false;
    }

    string Baby()
    {
        
        if(cgpa > 8)
        return "is a total baby";

        else 
        return "a very intelligent baby";
    }

};

int main()
{
    Student murga1("Mintu","clinginess", 7.2);
    Student murga2("Onju", "nervousness", 9.4);
    Student murga3("Elo Lady","chillness", 7.8);

    cout << murga1.hasHonours() <<endl;
    cout << murga2.hasHonours() <<endl;
    cout << murga3.Baby() <<endl;
    cout << murga1.Baby() <<endl;

    return 0;

}