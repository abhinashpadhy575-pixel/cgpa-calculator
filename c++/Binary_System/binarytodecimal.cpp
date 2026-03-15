#include<iostream>
using namespace std;
    int binTODecimal(int binNum){
        int ans= 0,pow=1;
        while(binNum>0){
            int rem = binNum%10;
            ans+=(rem*pow);
            binNum/=10;
            pow*=2;
        }
        return ans;
    }
    int main(){
        int binNum;
        cout << "Enter the value of binNum : " << endl;
        cin >> binNum;
        cout << "The value in binary is : " << binTODecimal(binNum) << endl;
        return 0;
            }