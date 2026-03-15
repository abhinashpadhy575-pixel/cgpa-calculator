#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number\n";
    cin>>a;
    cout<<"Enter the second number\n";
    cin>>b;
    cout<<"Enter the third number\n";
    cin>>c;
    if(a>b && a>c){
    cout << a << " is greatest \n";
    }
    else if (b>a && b>c){
       cout << b << " is greatest \n";
    }
    else if (c>a && c>b){
        cout << c << " is greatest \n";
    }
    else{
        cout<<"All numbers are equal \n";
    }
    return 0;
}