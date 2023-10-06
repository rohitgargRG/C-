#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int key = 9;
    int ans = -1;

    for(int idx = 0;idx<5;idx++){
        if(arr[idx] == key){
            ans = idx;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}