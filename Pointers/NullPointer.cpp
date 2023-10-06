#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // if we want to have a pointer variable which is just declared
    // but will get address later to store.
    // in that case we can use null pointer.

    int *ptr = NULL;  // Syntax to declare a null pointer
    int *p1 = NULL;
    int *p2 = 0;
    int *p3 = '\0';

    // we cannot dereference a null pointer
    cout <<ptr<<endl;
    cout <<p1<<endl;
    cout <<p2<<endl;
    cout <<p3<<endl;
    return 0;
}