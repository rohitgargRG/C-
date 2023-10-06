#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool prefixParts(vector<int>& v){
   int sum = 0;
   int Prefixsum = 0;
   
   for(int i=0;i<v.size();i++){
     sum += v[i];
   }
   
   for(int j=0;j<v.size();j++){
    Prefixsum += v[j];
    if(Prefixsum == sum - Prefixsum){
        return true;
    }
   }
   return false;
}
    
int main(){
    vector<int> v = {1,2,3,4,4,3,2,1};
    if(prefixParts(v)){
        cout<<"match found";
    }else{
        cout<<"no match found";
    }
    return 0;
}