// OOPs-4(Destructor and static keyword)

#include <bits/stdc++.h>
using namespace std;

class hero{
    private:
    int health;
    
    public:
    char *name;
    char level;
    static int timeToComplete;
    
    hero(){
        cout<<"Simple Constructor Call"<<endl;
        name=new char[100];
    }
    
   
    //Parametric constructor:
    hero(int health){
        this->health=health;
    }
    
     hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    
    //Copy constructor
    hero(hero& temp){
        char *ch =new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        
        cout<<"Copy constructor"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    
    void print(){
        cout<<"name:"<<this->name<<endl;
        cout<<"health:"<<this->health<<endl;
        cout<<"level:"<<this->level<<endl;
    }
    
    int gehealth(){
        return health;
    }
    
    char getlevel(){
        return level;
    }
    
    void sethealth(int h){
        health=h;
    }
    
    void setlevel(int ch){
        level=ch;
    }
    
    void setname(char name[]){
        strcpy(this->name,name);
    }
    
    static int random(){
        return timeToComplete;
    }
    
    //Destructor
    ~hero(){
        cout<<"Destructor Called"<<endl;
    }
};

//Initializing a static datatype
int hero::timeToComplete=7;

int main(){
    
    cout<<hero::timeToComplete<<endl;
    cout<<hero::random()<<endl;
    hero a;
    cout<<a.timeToComplete<<endl;
    
    hero b;
    b.timeToComplete=10;
    cout<<a.timeToComplete<<endl;
    cout<<b.timeToComplete<<endl;
    
    
    // Static 
    hero i;
    
    // //dynamically
    // hero *b=new hero;
    // //destructor is called manually(in dynamic)
    // delete b;
    
    return 0;
}










