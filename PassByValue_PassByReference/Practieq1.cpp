#include<iostream>
using namespace std;

void decrease(int p,int q){
    p--;
    q = q-2;
    cout<<p<<":"<<q ;
}

int main(){
    int p = 26;
    int q = 13;

    decrease(p,q);
    cout<<p<<":"<<q ;

    return 0;
}