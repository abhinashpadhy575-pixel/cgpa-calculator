#include<iostream>
using namespace std;
int factorialn( int n){
    int fact = 1;
    for (int  i=1;i<=n;i++ ){
        fact*=i;
    }
    return fact;
}
int main (){
    cout << factorialn(4)<< endl;
        cout << factorialn(5)<< endl;
        return 0;
}