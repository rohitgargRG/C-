#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || i==1|| i==n){
                cout<<j<<" ";
            }
            else{
                cout<<" ";
            } 
        }
        //  ERROR - DO AGAIN
        cout<<endl;
    }

    return 0;
}