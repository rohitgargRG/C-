#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);


    for(int idx =0;idx<(sizeof(arr)/sizeof(arr[0]));idx++){
        cout<<arr[idx]<<endl;
    }

    // For each loop
    for(int element:arr){
        cout<<element<<endl;
    }
    
    // while loop
    int index = 0;
    while(index<size){
        cout<<arr[index]<<endl;
        index++;
    }


    return 0;
}