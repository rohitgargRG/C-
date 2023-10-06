#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int x = 10;
    float y = 2;

    // Create a pointer that can store address of x;
    // As x is an integer variable , so we need a pointer
    // that can store address of integer type

    int *ptr = &x;
    cout<<ptr<<endl;
    // ptr stores address of x

    // create a pointer that can store address of y
    // y is a float variable, so we need a pointer
    // that can store address of float type
    float *ptr2 = &y;
    cout<<ptr2<<endl;
    // ptr2 stores address of y


    // only declaring pointer
    int *ptr3;
    cout<<ptr3<<endl;
    // this will print a random address(garbage value)

    int *ptr4;
    int marks = 100;
    ptr4 = &marks;
    cout<<ptr4<<endl;
    // print address of marks variable
    return 0;

    // float z = 3.45;
    // int *ptr5 = &z;  // Error
    

}