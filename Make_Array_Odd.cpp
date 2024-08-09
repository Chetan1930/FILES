#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "Hello Chetan I'm Class A";
    }
};

class B : virtual public A
{
public:
    B(){
        cout<<"i'm in class B"<<endl;
    }
    void print()
    {
        cout << "Hello Chetan I'm Class B";
    }
};


class C :virtual public A
{
public:
    C()
    {
        cout << "C kh rha h m aa chuka hu " << endl;
    }
    // void print(){
    //     A::print();
    //     // cout<<"hello bccha ab yha mera raaj h ";

    // }
};

class D: public B, public C
{
public:
    
};

int main()
{

    D obj;
    obj.B::print();

    return 0;
}