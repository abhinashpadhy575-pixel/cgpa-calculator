#include<iostream>
using namespace std;
int minoftwo( int a, int b){
    if (a<b){
        return a;
    }
    else{
        return b;
    }
}
int main (){
    cout << "Minimum of two number is " << minoftwo(5,3) << endl;
    return 0; 
}