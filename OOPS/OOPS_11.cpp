// Ambiguous Inheritance

#include <iostream>
using namespace std;

class A{
    public:
    void fun(){
        cout<<"i m A"<<endl;
    }
};

class B{
    public:
    void fun(){
        cout<<"i m B"<<endl;
    }
};

class C:public A,public B{
    
};

int main()
{
    C obj;
    // obj.fun();(ambiguous)
    
    obj.B::fun();
    obj.A::fun();

    return 0;
}
