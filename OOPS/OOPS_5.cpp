// Inheritance:

#include <iostream>
using namespace std;

class Human{
    protected:
    int height;
    
    public:
    int weight;
    
    private:
    int age;
    
    public:
    int getage(){
        return this->age;
    }
    
    void setweight(int w){
        this->weight=w;
    }
};

class Male:private Human{
    public:
    string color;
    
    void sleep(){
        cout<<"sleep"<<endl;
    }
    int getheight(){
        return this->height;
    }
};

int main()
{
    Male o1;
    o1.getheight();

    // Male Obj1;
    // Obj1.setweight(80);
    
    // cout<<Obj1.age<<endl;
    // cout<<Obj1.color<<endl;
    // cout<<Obj1.weight<<endl;
    // cout<<Obj1.height<<endl;
    // Obj1.sleep();
}









