#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 4;
    int max;

    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;

    a>b ? max=a : max =b;
    cout<<max<<endl;

    return 0;
}