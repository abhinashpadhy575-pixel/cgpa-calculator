#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i=1; i<=n;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout << "Sum of numbers divisible by 3 from 1 to "<< n << " is : " << sum << endl;
    return 0;
}