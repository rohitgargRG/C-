#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,2,1,2,3};
    int target = 2;
    int count=-1;


    // for(int i=0;i<v.size();i++){
    //     if(v[i] == target){
    //         count = i;
    //     }
    // }

    for(int i=v.size()-1;i>=0;i--){
        if(v[i] == target){
            count = i;
            break;
        }
    }
    cout<<count;


    return 0;
}