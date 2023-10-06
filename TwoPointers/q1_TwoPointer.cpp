#include<iostream>
#include<vector>
using namespace std;

vector<int> sortZeroesAndOnes(vector<int>& v){
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while(left_ptr<right_ptr){
        if(v[left_ptr] == 1 && v[right_ptr] == 0){
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if(v[left_ptr] == 0){
            left_ptr++;
        }
        if(v[right_ptr] == 1){
            right_ptr--;
        }
    }
    // return;
}
    
int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<endl;

    vector<int> v;
    cout<<"enter Elements : "<<endl;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    sortZeroesAndOnes(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}