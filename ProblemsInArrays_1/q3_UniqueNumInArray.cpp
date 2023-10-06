#include<iostream>
#include<vector>
using namespace std;

vector<int> UniqueCheck(vector<int>& nums){
    
}
    
int main(){
    vector<int> nums = {1,2,3,4,3,2,1};
    vector<int> ans = UniqueCheck(nums);
    for(int i=0;i<ans.size();i++){
        if(ans[i]>0) cout<<ans[i]<<endl; 
    }
    return 0;
}