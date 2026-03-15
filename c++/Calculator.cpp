#include<iostream>
using namespace std;
int main(){
    int choice;
    int a,b;
    do{
        cout<<"=====MENU====="<<endl;
        cout<< "1.Addition (+) "<<endl;
        cout<< "2.Subtraction (-) "<<endl;
        cout<< "3.Multiplication (*) "<<endl;
        cout<< "4.Division (/) "<<endl;
        cout<< "5.Exit "<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        if(choice >=1 && choice<=4){
            cout << "Enter two numbers";
            cin >> a >>b;
        }
        switch (choice) {
            case 1:
            cout << "Result = " << a+b <<endl;
            break;
             case 2:
            cout << "Result = " << a-b <<endl;
            break;
             case 3:
            cout << "Result = " << a*b <<endl;
            break;
             case 4:
             if (b!=0)
            cout << "Result = " << a/b <<endl;
             else
            cout << "Error: Division by zero not possible " <<endl; 
            break;
             case 5:
            cout << "Exiting calculator, Thank You" <<endl;
            break;
            default:
            cout << "Invalid choice"<<endl;
        }
    } while(choice!=5);
    return 0;
}