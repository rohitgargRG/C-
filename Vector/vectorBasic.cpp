#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;

    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    // Adding Elements
    v.push_back(1);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    // Adding Another Element
    v.push_back(2);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    // Adding Another Element
    v.push_back(3);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    // resizing

    v.resize(5);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;


    v.resize(10);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    // deleting end element
    v.pop_back();
    v.pop_back();

    cout<<"Size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    return 0;
}