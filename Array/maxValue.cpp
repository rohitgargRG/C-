#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,-3,40,5};
    int max = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int idx =0;idx<size;idx++){
        if(max < arr[idx]){
            max = arr[idx];
        }
    }
    cout<<"max = "<<max;
        
    
    
    return 0;
}