#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

    // default constructor
    Hero(){
        cout<<"Inside Constructor"<<endl;
    }

    // parameterised constructor
    Hero(int health){
        //  this.health = health;  -- > ERROR
        cout<<this<<endl;
        this->health = health;
    }

    Hero(int health,char level){
        cout<<this<<endl;
        this->health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero& temp){
        cout<<"inside copy constructor"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<"health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
    }
};
int main(){
    
    // this automatically will call the default constructor
    Hero rg(100);
    // cout<<&rg<<endl;
    rg.print();

    Hero temp(200,'D');
    temp.print();

    //dynamically
    Hero *h = new Hero(12);
    h->print();

    // Copy Constructor
    Hero suresh(70,'C');
    suresh.print();

    Hero ritesh(suresh);
    ritesh.print();


    return 0;
}