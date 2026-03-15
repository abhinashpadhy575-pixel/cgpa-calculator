#include <iostream>
using namespace std;
bool isprime(int n){
    if (n<=1)
     return false;
     for ( int i =2;i*i<=n;i++){
        if (n%i==0)
            return false;
        }
        return true;
     }
int main (){
    int num;
    cout << "Enter the number : " << endl;
    cin >> num;
    if(isprime(num))
    cout << num <<" is prime number" << endl;
    else 
cout << num <<"is not a prime number " << endl;
return 0;
}