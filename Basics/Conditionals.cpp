#include<iostream>
using namespace std;

int main(){
    int score;
    cin>>score;

    if(score>80){
        cout<<"well done"<<endl;

    }
    else if(score >50 && score <=80){
        cout<<"can improve"<<endl;
    }
    else{
        cout<<"poor";
    }

    return 0;
}