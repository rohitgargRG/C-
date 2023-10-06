#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int x = 10;
    int *ptr = &x;
    cout<<x<<endl;
    cout<<ptr<<endl; // prints address stored in ptr (i.e address of x)

    // dereference operator
    cout<<*ptr<<endl;
    // prints value present at the address stored in ptr

    x = 23; // the bucket x updated the value from 18 to 23
    // but ptr is still pointing to same bucket
    // Now if we dereference ptr , it will print 23
    cout<<x<<endl;
    cout<<*ptr<<endl; // 23

    *ptr = 200;
    cout<<x<<endl;  // now x = 200
    cout<<*ptr<<endl; // 200

    int valueAtX = *ptr;
    cout<<valueAtX<<endl;

    return 0;
}