#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"enter your char:";

    cin>>ch;

    if(ch>='a'&& ch<='z'){
        printf("its lowercase  ");
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"its uppercase  ";
    }
    else{
        cout<<" please enter a char sir  ";
    }



}