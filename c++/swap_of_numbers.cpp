#include<iostream>
using namespace std;
int main(){
    int a,b;
    int temp;
    cout<<" Enter the first number\n";
    cin >> a;
    cout<<" Enter the second number\n";
    cin >> b;
    cout<< " Before swapping " << endl;
    cout<< " Value of a is " << a << endl;
    cout<< " Value of b is " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout<< " After swapping " << endl;
    cout<< " Value of a is " << a << endl;
    cout<< " Value of b is " << b<< endl;
    return 0;
}