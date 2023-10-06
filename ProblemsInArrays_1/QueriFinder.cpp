#include<iostream>
#include<vector>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    const int N = 1e5 + 10; // 10^5
    vector<int> freq(N,0);
    // creating a vector with size 10^5,starting 
    // with element 0.

    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    cout<<"Enter Queries: ";
    int q;
    cin>>q;

    while(q--){
        int queryElement;
        cin>>queryElement;
        cout<<freq[queryElement]<<endl;
    }
    return 0;
}