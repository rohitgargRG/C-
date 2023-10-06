#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void prefixSum(vector<int>& nums){
    for(int i=1;i<nums.size();i++){
        nums[i] += nums[i-1]; 
    }
    return;
}
    
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    prefixSum(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}