#include<iostream>
#include<vector>

using namespace std;
int main(){
    int sumEven=0;
    int sumOdd=0;
    vector<int> v = {1,1,2,24,30,3,4,4};

    for(int i=0;i<v.size();i++){
        if(i%2 == 0) sumEven += v[i];
        else sumOdd += v[i];
    }
    cout<<"difference = "<<sumEven - sumOdd;

    return 0;
}