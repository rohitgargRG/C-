#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> sortSquare(vector<int>& v){
    
    int left_ptr = 0;
    int right_ptr = v.size() - 1; 
    vector<int> ansVector;  
    while(left_ptr <= right_ptr){
         if(abs(v[left_ptr])<abs(v[right_ptr])){
            ansVector.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
           
         }else{
            ansVector.push_back(v[left_ptr]*v[left_ptr]);
             left_ptr++;
         }
    }
    reverse(ansVector.begin(),ansVector.end());
    for(int i=0;i<v.size();i++){
        cout<<ansVector[i]<<" ";
    }
}
    
int main(){
    int n;
    cout<<"Enter size of vector: "<<endl;
    cin>>n;    

    vector<int> v;
    cout<<"Enter Elements in vector: "<<endl;

    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    sortSquare(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}