#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int x,y; 
    // currently x and y are having garbage values

    // taking input
    cin>>x>>y;

    int *ptrx = &x;
    // &x fetches address of x and then store it in ptrx

    int *ptry = &y;
    // &y fetches address of y and then stor it in ptry

    int result;
    // currently result has a garbage value

    int *ptr_result = &result;

   /*
        *ptrx  == 10
        *ptry == 20
        *ptr_result = 10 + 20
        result = 10 + 20
   */
    *ptr_result = *ptrx + *ptry;

    cout<<result<<" "<<*ptr_result;


    return 0;
}