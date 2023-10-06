#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int x = 9;
    int y = 2;
    int *ptr = &x;

    // ptr = 5;  // Error
    // reason -- we cant do this as ptr only stores address , nothing else

    // *ptr = &y;  // Error
    // reason - cant store address in an int bucket


    cout<<&ptr<<endl; // prints address of ptr bucket , not the address stored in ptr
    cout<<ptr; // prints aaddress stored in ptr bucket
    return 0;
}