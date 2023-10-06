#include<iostream>
#include<vector>

using namespace std;
int main(){
    bool flag = true;

    vector<int> v = {1,2,2,4,5,6};
    for(int i=0;i<v.size();i++){
        if(v[i]<=v[i+1]){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<"sorted array";
    if(flag == false) cout<<"Unsorted array";
    return 0;
}