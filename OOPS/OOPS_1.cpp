#include <iostream>
using namespace std;

class book{
    private: 
    char name;
    public:
    int number;
    
    int getnumber(){
        return number;
    }
    char getname(){
        return name;
    }
    void setnumber(int n){
        number=n;
    }
     void setname(int ch){
        name=ch;
    }
};
int main(){
    //static allocation
    book h1;
    h1.setname('f');
    h1.number=7;
    cout<<h1.number<<endl;
    cout<<h1.getname()<<endl;
    
    //dynamic allocation
    book *i=new book;
    i->setname('h');
    i->number=87;
    cout<<(*i).number<<endl;
    cout<<(*i).getname()<<endl;
    cout<<i->number<<endl;
    cout<<i->getname()<<endl;
    
    // h1.setname('a');
    // h1.number=65;
    // cout<<h1.getnumber()<<endl;
    // cout<<h1.getname()<<endl;
    // cout << h1.number<<endl;
    
    // cout << h1.name<<endl;
}
