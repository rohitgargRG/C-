#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter k : ";
    cin>>k;
    k = k%n; // since,n can be greater than size
    int ansArr[n];
    int j=0;
    //inserting last k elements in ans array
    for(int i=n-k;i<n;i++){
        ansArr[j++] = arr[i];
    }

    //insert first n-k elements in an array
    for(int i=0;i<=k;i++){
        ansArr[j++] = arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<ansArr[i]<<" ";
    }
    return 0;
}