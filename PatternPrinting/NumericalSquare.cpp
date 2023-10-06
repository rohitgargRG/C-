#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a;
    for(int i=1;i<=n;i++){
        a = i;
        for(int j=1;j<=n;j++){     
            cout<<a<<" ";
             a++;
            if(a == n+1) a=1;   
        }
        cout<<endl;
    }
    return 0;
}