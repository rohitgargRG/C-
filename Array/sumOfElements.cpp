#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int idx = 0;idx<size;idx++){
        sum += arr[idx];
    }

    cout<<"sum = "<<sum;
    return 0;
}