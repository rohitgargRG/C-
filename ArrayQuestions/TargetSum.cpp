#include<iostream>
#include<vector>
using namespace std;

vector<int> nums(vector<int>& nums1,int target){
    for(int i=0;i<nums1.size();i++){
        for(int j=i+1;j<nums1.size();j++){
            if(nums1[i]+nums1[j]== target) return{i,j};
        }
    }
    return {};
}

int main(){
    vector<int> arr = {3,4,6,7,1};
    int targetsum = 7;

    vector<int> index = nums(arr,targetsum);
    for(int i=0;i<index.size();i++){
            cout<<index[i]<<" ";
    }

    return 0;
}