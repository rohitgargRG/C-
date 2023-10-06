#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int arr[2] = {5,4};

    int *ptr = &arr[0];

    cout<<(*ptr)++<<"\n";  // 5
    cout<<arr[0]<<" "<<arr[1]<<"\n";
    return 0;
}