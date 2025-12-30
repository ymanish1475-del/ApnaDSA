#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"enter your char:";

    cin>>ch;

    if(ch>= 97 && ch<= 122 ){
        printf("its lowercase  ");
    }
    else if(ch>= 65 &&ch<= 90 ){
        cout<<"its uppercase  ";
    }
    else{
        cout<<" please enter a char sir  ";
    }
}