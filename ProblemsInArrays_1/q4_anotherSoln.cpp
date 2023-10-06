#include<iostream>
using namespace std;
    
int main(){
    int arr[] = {2,3,5,7,6,1,7};
    int max = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<max;


    return 0;
}