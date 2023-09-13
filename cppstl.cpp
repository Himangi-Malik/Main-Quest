#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void vector1()
{
    vector<int> v;
    cout << "capacity is "<< v.capacity()<< endl;

    v.push_back(1);
    cout << "capacity is "<< v.capacity()<< endl;
   
    v.push_back(2);
    cout << "capacity is "<< v.capacity()<< endl;
 
    v.push_back(3);
    cout << "capacity is "<< v.capacity()<< endl;

    cout << "size is " << v.size() << endl;
    //size is kitne element, capacity is kitni memory assigned hai
    cout << "element at 2nd index " << v.at(2)<< endl;
    cout << "front " << v.front() << endl;
    //same can be done for back

    v.pop_back();
    //clear function size 0 karta capacity is same
    v.clear();
   
   vector<int> a{5,1};
   //size is 5, initialize kar diya sabko 1 se nhi to by default 0 se ho jaate

   vector<int> b{a};
   // b mein saara a copy ho jaayega

}

void deque1()
{
    deque <int> d;

    d.push_back(1);
    d.push_front(2);

    //d.pop_front();
    //d.pop_back();

    d.front();
    d.back();

    d.empty(); //0 for false 1 for true

    //erase function hai and uss mein specify karna ki kahan se kahan tak delete 
    //varna error dega cool okay pakak
    d.erase(d.begin(), d.begin() +1);

    //agar print karna then aise likhte hai
    for(int i:d)
    cout << i <<endl;


   
}

void list1()
{
    list <int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l)
    cout << i <<endl;

    l.erase(l.begin());

    list<int> n{5,100};
    //5 element all initialised with 100




}

void stack1()
{
    stack <string> s;

    s.push("elolady");
    s.push("onjuponju");
    s.push("mintubaby");

    cout<< "top element " <<s.top();

    s.pop();
    cout<< "top element " <<s.top();



}

void queue1()
{
    queue <string> q;

    q.push("elolady");
    q.push("onjuponju");
    q.push("mintubaby");

    cout<< "front element " <<q.front();

    q.pop();
    cout<< "front element " <<q.front();

}



int main()
{
    //vector1();
    // deque1();
    //list1();
    //stack1();
    queue1();

    return 0;

}
//baaki structures baad mein hi karenge hehe from lecture 19 love babbar
