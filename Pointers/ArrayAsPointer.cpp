#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int arr[3] = {15,12,6};
    int *ptr = &arr[0];

    cout<<ptr<<" "<<arr<<endl;
    cout<<*ptr<<" "<<*arr<<endl;
    cout<<*(arr + 0)<<endl; //15
    cout<<*(arr + 1)<<endl; //12
    cout<<*(arr + 2)<<endl; //6

    for(int i=0;i<3;i++){
        cout<<*(arr + i)<<" ";
    }
    return 0;
}