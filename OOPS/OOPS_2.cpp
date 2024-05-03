#include <iostream>
using namespace std;

class hero{
    private:
    int num;
    public:
    char name;
    char level;
    
    hero(){
        cout<<"Simple Constructor Call"<<endl;    
    }
    
    //Parametric constructor:
    hero(int name){
        this->name=name;
    }
    
     hero(int name,char level){
        this->level=level;
        cout<<"this->"<<this<<endl;
        cout<<"this->"<<this<<endl;
        this->name=name;
    }
    
    void print(){
        cout<<"number: "<<this->num<<endl;
        cout<<"name: "<<this->name<<endl;
    }
    
    int getnum(){
        return num;
    }
    
    char getname(){
        return name;
    }
    
    void setnum(int n){
        num=n;
    }
    
    void setname(int ch){
        name=ch;
    }
};

int main(){
    hero suresh(50,'f');
    suresh.print();
    //copy constructor
    hero r(suresh);
    r.print();
    
    // //static
    // hero h(10);
    // cout<<"Address of h :"<<&h<<endl;
    // h.getname();
    
    // //dynamic
    // hero *i = new hero(78);
    
    //  hero temp(22,'h');
}









