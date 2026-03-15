#include<iostream>
using namespace std;
int main(){
    int n ;
    bool isprime = true; 
     cout <<"Enter the number \n";
    cin>> n;
    for(int i = 2;i*i<=n;i++){
        if (n%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime == true){
        cout << "prime number" << endl;
    }
    else {
        cout << "Non prime number" << endl; 
    }
    return 0;
}