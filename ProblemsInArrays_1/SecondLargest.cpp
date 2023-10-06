#include<iostream>
#include<climits>
using namespace std;

 int max(int arr[],int size){
    int max = INT_MIN;
    int second_max = INT_MIN;
    
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i]>second_max && arr[i]!= max){
            second_max = arr[i];
        }
    }
    return second_max;
 }   
int main(){
    int arr[] = {2,3,5,7,6,1,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = max(arr,size);
    cout<<"second max = "<<ans<<endl;
    return 0;
}