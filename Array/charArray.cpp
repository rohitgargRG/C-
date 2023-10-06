#include<iostream>
using namespace std;

int main(){

    char vowels[5];
    // for(int i=0;i<5;i++){
    //     cin>>vowels[i];
    // }

    for(char &elements:vowels){
        cin>>elements;
    }

    for(int i=0;i<5;i++){
        cout<<vowels[i]<<" ";
    }


    return 0;
}