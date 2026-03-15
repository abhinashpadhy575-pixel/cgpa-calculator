#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"Uppercase";
    }
    else{
        cout<<"Lowercase";
    }
}