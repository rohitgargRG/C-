#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void process(int *arr,int n){
    // inside this function we have the access of the same array in the main
    for(int i=0;i<n;i++){
        cout<<*(arr + i)<<"\n";
    }
}
int main(){
    int arr[3] = {5,1,2};
    process(arr,3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}