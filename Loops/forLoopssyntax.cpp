#include<iostream>
using namespace std;

int main(){
    // ommitting init statements
    // int i = 1;
    // for(;i<5;i++){
    //     cout<<i<<endl;
    // }

    // omitting condition
    // for(int i=0;;i++){
    //     cout<<i<<endl;
    //     if(i == 5) break;
    // }

    // omitting Final Expression
    // for(int i=0;i<5;){
    //     cout<<i<<endl;
    //     i++;
    // }

    //omitting all the conditions
    int i=0;
    for(;;){
        if(i == 5) break;
        cout<<i<<endl;
        i++;
    }


    //

    return 0;
}