#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    int factn = factorial (n);
    int factr = factorial (r);
    int factnmr = factorial (n-r);
    return factn/(factr*factnmr);
}
int main (){
    int n; 
    cout << "Enter the value of n : " << endl;
    cin>> n;
    int r;
    cout << "Enter the value of r : " << endl;
    cin>> r;
    cout << "The value after the operation " << ncr (n,r) << endl;
    return 0;
}