#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void FirstAndLast(string s,char ch,int *f,int *l){
    for(int i=0;i<s.size();i++){
        if(s[i] == ch){
            *f = i;
            break;
        } 
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == ch){
            *l = i;
            break;
        }  
    }
}


int main(){
    string s = "aaabac";
    char ch = 'a';
    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;
    FirstAndLast(s,ch,pf,pl);

    cout<<first<<" "<<last<<endl;
    cout<<*pf<<" "<<*pl;

    return 0;
}