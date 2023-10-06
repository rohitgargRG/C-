#include<iostream>
#include<vector>

using namespace std;
int main(){
    int x;
    cout<<"Enter x : "<<endl;
    cin>>x;

    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int count=0;

    for(int i=0;i<v.size();i++){
        if(v[i] > x){
            count++;
        }
    }
    cout<<"Number of Elements strictly greater than "<<x<<"is"<<count;


    return 0;
}