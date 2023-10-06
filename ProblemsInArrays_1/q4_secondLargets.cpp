#include<iostream>
using namespace std;

int largestElementIndex(int arr[],int size){
    int max = INT_FAST16_MIN;
    int maxidx;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
            maxidx = i;
        }
    }
    return maxidx;
}
    
int main(){
    int arr[] = {2,3,5,7,6,7,1};
    int largestElementInd = largestElementIndex(arr,6);
    // arr[largestElementInd] = -1;
    
    int largetselement = arr[largestElementInd];
    for(int i=0;i<7;i++){
        if(arr[i] == largetselement){
            arr[i] = -1;
        }
    }
    int secondlargestElementInd = largestElementIndex(arr,6);
    cout<<arr[secondlargestElementInd]<<endl;
    return 0;
}
