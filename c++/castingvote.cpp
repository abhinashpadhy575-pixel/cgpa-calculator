#include<iostream>
using namespace std;
int main (){
    int age;
    cout<<"Enter age";
    cin>>age;
    if(age>=18)
    cout<<"You can give vote";
    else{
        cout<<"You can not give vote";
    }
    return 0;
}