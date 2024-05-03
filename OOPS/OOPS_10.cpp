// Hybrid Inheritence

#include <iostream>
using namespace std;

class A{
    
   public:
   int age;
   int weight;
   
   public:
   void speak(){
       cout<<"Speaking"<<endl;
   }
};
class D{
   
   public:
   void sing(){
       cout<<"Singing"<<endl;
   }
};

class B:public A{
    public:
    void f2(){
        cout<<"Inside function 2"<<endl;
    }
};
class C:public A,public D{
    public:
     void f3(){
        cout<<"Inside function 3"<<endl;
    }
};

int main(){
   B first;
   first.f2();
   first.speak();
   cout<<first.age<<endl;
   
   C second;
   second.f3();
   cout<<second.weight<<endl;
     
    return 0;
}
