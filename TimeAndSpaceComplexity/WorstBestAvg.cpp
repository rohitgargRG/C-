#include<iostream>
#include<vector>
using namespace std;
    
int main(){
    cout<<"Hello World"; // O(1)

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
        // O(n)
    }

    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int arr2[] = {1,2,3,4,5,6,7,8};
    int m = 8;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum1 += arr1[i];    // 3n iterations
    }

    for(int i=0;i<m;i++){
         sum2 += arr2[i]; // 3m iterations
        // O(n)
    }

    cout<<sum1<<" "<<sum2;


    // Time complexity of nested loops

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}