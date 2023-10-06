#include<iostream>
#include<bits/stdc++.h>
// if you want to use hero class from Hero.cpp file
// #include "Hero.cpp"

using namespace std;

class Hero{
    // properties / data members
    private:
    int health2 = 200;
    // NOTE - by default access modifier of data members in a class is private
    public:
    // whatever is written below this will be public
    int health;
    char level;

    void print(){
        cout<<level<<endl;
    }

    // this is private , hence it cannot be accesed outside this class

    // So,we can use getter and setter methods to access this variable

    // getter
    int getHealth(){
        return health;
    }

    int getHealth2(){
        return health2;
    }
    
    char getlevel(){
        return level;
    }

    // Setter
    void setHealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }

};

int main(){
    
   
    // Initializing object

    // static allocation
    Hero obj1;
    cout<<"level is: "<<obj1.level<<endl;
    cout<<"health is: "<<obj1.getHealth2()<<endl;

    // dynamic allocation
    Hero *obj2 = new Hero;
    (*obj2).setHealth(600);
    (*obj2).setlevel('s');
    cout<<"level is: "<<(*obj2).level<<endl;
    cout<<"health is: "<<(*obj2).getHealth()<<endl;

    // Another way of writing the above two statements is using arrow
    obj2->setHealth(1600);
    obj2->setlevel('l');
    cout<<"level is: "<<obj2->level<<endl;
    cout<<"health is: "<<obj2->getHealth2()<<endl;


    // checking size of object
    cout<<sizeof(obj1)<<endl;

    // accessing elements of a class
    cout<<"health is: "<<obj1.health<<endl;
    cout<<"level is: "<<obj1.level<<endl;

    obj1.print();

    obj1.level = 'A';
    obj1.print();

    // accessing a private element
    // cout<<"health2 is : "<<obj1.health2<<endl;  // ERROR
    // since a is declared private,hence it cannot be accessed outside the class

    // using getter method to access the private element
    cout<<"health2 is : "<<obj1.getHealth2()<<endl;

    // using setter method to set the value of private element
    obj1.setlevel('D');
    cout<<"new level is : "<<obj1.getlevel()<<endl;
    
    return 0;
}