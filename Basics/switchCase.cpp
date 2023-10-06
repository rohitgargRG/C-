#include<iostream>
using namespace std;

int main(){

    char alphabet;
    cout<<"Enter an alphabet:";
    cin>>alphabet;

    switch(alphabet){
        case 'a':
            cout<<"vowel"<<endl;
            break;
        case 'e':
            cout<<"vowel"<<endl;
            break;
        case 'i':
            cout<<"vowel"<<endl;
            break;
        case 'o':
            cout<<"vowel"<<endl;
            break;
        case 'u':
            cout<<"vowel"<<endl;
            break;
        default:
            cout<<"consonant"<<endl;
    }

    return 0;
}