#include<iostream>
#include<vector>
using namespace std;

vector<int> Triplet(vector<int>& nums,int target){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if(nums[i]+nums[j]+nums[k]==target){
                        // return {i,j,k};
                        cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
    return {};
}
    
int main(){
    int target = 5;
    vector<int> nums = {3,1,2,4,0,6,-1};
    vector<int> ans = Triplet(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}