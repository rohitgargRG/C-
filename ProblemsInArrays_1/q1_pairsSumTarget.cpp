#include<iostream>
#include<vector>
using namespace std;

vector<int> TwoSum(vector<int>& nums,int target){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j] == target){
                return {i,j};
            }
        }
    }
    return {};
}  
int main(){
    int target = 4;
    vector<int> nums = {1,2,3,4,5,6,7};

    vector<int> ans = TwoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    
    return 0;
}