//Hierarchical Inheritance:

#include <iostream>
using namespace std;

class Animal{
    
   public:
   int age;
   int weight;
   
   public:
   void speak(){
       cout<<"Speaking"<<endl;
   }
};
class Human{
    
   public:
   int colour;
   int love;
   
   public:
   void listen(){
       cout<<"listening"<<endl;
   }
};
class GermanShepherd:public Animal,public Human{
    
};

int main(){
    GermanShepherd d;
    d.speak();
    cout<<d.age<<endl;
    d.listen();
    
     
    return 0;
}
