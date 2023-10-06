#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = (arr + 2);
    cout<<*ptr<<"\n"; //3
    *ptr++;
    cout<<*ptr<<"\n"; //4
    *ptr--;
    cout<<*ptr<<"\n"; //3

    // creating a pointer to point the entire array
    int arr2[3] = {11,12,13};
    int (*p)[3] = &arr2;
    cout<<p<<" "<<arr2<<" "<<*p<<" "<<*arr2<<"\n";
    return 0;
}