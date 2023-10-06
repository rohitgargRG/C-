#include<iostream>
using namespace std;

int add(int,int);

int main(){
    int a,b;
    cin>>a>>b;
    
    cout<<add(a,b);

    return 0;
}
int add(int a,int b){
    return a+b;
}