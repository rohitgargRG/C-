#include<iostream>
using namespace std;

int main(){

    int cp,sp;
    cout<<"Enter cp: "<<endl;
    cin>>cp;
    cout<<"Enter sp: "<<endl;
    cin>>sp;

    if(sp >= cp){
        cout<<"Profit = "<<sp-cp;
    }
    else{
        cout<<"Loss = "<<cp - sp;
    }

    return 0;
}