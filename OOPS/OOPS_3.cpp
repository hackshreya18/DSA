#include <bits/stdc++.h>
using namespace std;

class hero{
    private:
    int health;
    
    public:
    char *name;
    char level;
    
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
};

int main(){
    hero h1;
    h1.sethealth(70);
    h1.setlevel('g');
    char name[10]="Shreya";
    h1.setname(name);
    
    h1.print();
    //Use default copy structure
    
    hero h2(h1);
    h1.print();
     
    h1.name[0]='j';
    h1.print();
    
    h2.print();
    //copy assignment operator:
    
    h1=h2;
    h1.print();
    
    h2.print();
    
}










