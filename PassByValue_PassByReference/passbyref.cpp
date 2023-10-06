#include<iostream>
using namespace std;

int main(){
    int p = 5;
    int &q = p;

    q++;
    cout<<p<<" "<<q<<endl;

    cout<<&p<<" "<<&q<<endl;

    return 0;
}