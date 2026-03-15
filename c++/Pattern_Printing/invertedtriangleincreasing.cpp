#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n : ";
    cin>>n;
    // top part
 for(int i=0;i<n;i++){ // line
      for(int j=0;j<n-i-1;j++){ // space
        cout<<" ";
    }
    cout<<"*";
    if(i!=0){
    for(int j=0;j<2*i-1;j++){ 
         cout<<" ";
    }
    cout <<"*";
}
    cout << endl;
}
// bottom
 for(int i=0;i<n-1;i++){ // line
      for(int j=0;j<i+1;j++){ // space
        cout<<" ";
    }
 cout << "*";
 if(  i!=n-2){
    for(int j=0;j<2*(n-i)-5;j++){ // space
        cout<<" ";
    }
cout << "*";
 }
 cout<<endl;
}
return 0;
}