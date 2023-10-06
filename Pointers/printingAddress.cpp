#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int x = 10;
    // to print address of x
    cout << &x<<endl;  

    int y =0;
    cout<<&x<<" "<<&y;
    return 0;
}