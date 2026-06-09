#include<iostream>
#include<string>
using namespace std;
int gradePoint(string grade){
if (grade == "O") {
return 10;
}
else if (grade == "A+") {
return 9;
}
else if (grade == "A") {
return 8;
}
else if (grade == "B+") {
return 7;
}
else if (grade == "B"){
return 6;
}
else if (grade == "C") {
return 5;
}
else return 0;
}
int main(){
int Total_marks[11];
int midsemmarks[6];
int endsemmarks[6];
int assignmentmarks[6];
string grade[11];
int grade_point[11];
cout<< "Enter the mark in Physics : " << endl;
do {
    cout << "Enter Assignment marks (0-20): ";
    cin >> assignmentmarks[0];
} while (assignmentmarks[0] < 0 || assignmentmarks[0] > 20);
do {
    cout << "Enter End-sem marks (0-50): ";
    cin >> endsemmarks[0];
} while (endsemmarks[0] < 0 || endsemmarks[0] > 50);
do {
    cout << "Enter Mid-sem marks (0-30): ";
    cin >> midsemmarks[0];
} while (midsemmarks[0] < 0 || midsemmarks[0] > 30);
cout<< "Enter the mark in Math : " << endl;
do {
    cout << "Enter Assignment marks (0-20): ";
    cin >> assignmentmarks[1];
} while (assignmentmarks[1] < 0 || assignmentmarks[1] > 20);
do {
    cout << "Enter End-sem marks (0-50): ";
    cin >> endsemmarks[1];
} while (endsemmarks[1] < 0 || endsemmarks[1] > 50);
do {
    cout << "Enter Mid-sem marks (0-30): ";
    cin >> midsemmarks[1];
} while (midsemmarks[1] < 0 || midsemmarks[1] > 30);
cout<< "Enter the mark in C and Data Structure : " << endl;
do {
    cout << "Enter Assignment marks (0-20): ";
    cin >> assignmentmarks[2];
} while (assignmentmarks[2] < 0 || assignmentmarks[2] > 20);
do {
    cout << "Enter End-sem marks (0-50): ";
    cin >> endsemmarks[2];
} while (endsemmarks[2] < 0 || endsemmarks[2] > 50);
do {
    cout << "Enter Mid-sem marks (0-30): ";
    cin >> midsemmarks[2];
} while (midsemmarks[2] < 0 || midsemmarks[2] > 30);
cout<< "Enter the mark in Basic Electrical Engineering : " << endl;
do {
    cout << "Enter Assignment marks (0-20): ";
    cin >> assignmentmarks[3];
} while (assignmentmarks[3] < 0 || assignmentmarks[3] > 20);
do {
    cout << "Enter End-sem marks (0-50): ";
    cin >> endsemmarks[3];
} while (endsemmarks[3] < 0 || endsemmarks[3] > 50);
do {
    cout << "Enter Mid-sem marks (0-30): ";
    cin >> midsemmarks[3];
} while (midsemmarks[3] < 0 || midsemmarks[3] > 30);
cout<< "Enter the mark in Basic Manufacturing Engineering : " << endl;
do {
    cout << "Enter Assignment marks (0-20): ";
    cin >> assignmentmarks[4];
} while (assignmentmarks[4] < 0 || assignmentmarks[4] > 20);
do {
    cout << "Enter End-sem marks (0-50): ";
    cin >> endsemmarks[4];
} while (endsemmarks[4] < 0 || endsemmarks[4] > 50);
do {
    cout << "Enter Mid-sem marks (0-30): ";
    cin >> midsemmarks[4];
} while (midsemmarks[4] < 0 || midsemmarks[4] > 30);
cout<< "Enter the mark in English for Technical Writing : " << endl;
do {
    cout << "Enter Assignment marks (0-20): ";
    cin >> assignmentmarks[5];
} while (assignmentmarks[5] < 0 || assignmentmarks[5] > 20);
do {
    cout << "Enter End-sem marks (0-50): ";
    cin >> endsemmarks[5];
} while (endsemmarks[5] < 0 || endsemmarks[5] > 50);
do {
    cout << "Enter Mid-sem marks (0-30): ";
    cin >> midsemmarks[5];
} while (midsemmarks[5] < 0 || midsemmarks[5] > 30);
cout << "Enter your marks in Physics Lab : " <<endl;
cin >> Total_marks[6];
cout << "Enter your marks in BEE Lab : " <<endl;
cin >> Total_marks[7];
cout << "Enter your marks in Programming Lab : " <<endl;
cin >> Total_marks[8];
cout << "Enter your marks in CREW Lab : " <<endl;
cin >> Total_marks[9];
cout << "Enter your marks in Yoga : " <<endl;
cin >> Total_marks[10];
for (int i = 0; i<=10;i++){
if (i<=5){
    Total_marks[i]=midsemmarks[i]+endsemmarks[i]+assignmentmarks[i];
}
if (Total_marks[i]<=100 && Total_marks[i]>= 90){
cout << "Your grade is 'O'" << endl;
grade[i] = "O";
}
else if(Total_marks[i] >=80 && Total_marks[i]< 90){
cout << "Your grade is 'A+'" << endl;
grade[i] = "A+";
}
else if (Total_marks[i] >=70 && Total_marks[i]< 80){
    cout << "Your grade is 'A'" << endl;
    grade[i] = "A";
}
else if (Total_marks[i] >=60 && Total_marks[i]< 70){
    cout << "Your grade is 'B+'" << endl;
    grade[i] = "B+";
}
else if (Total_marks[i] >=50 && Total_marks[i]< 60){
    cout << "Your grade is 'B'" << endl;
    grade[i] = "B";
}
else if(Total_marks[i] >=35 && Total_marks[i]< 50){
    cout << "Your grade is 'C'" << endl;
    grade[i] = "C";
}
else if (Total_marks[i] < 35){
    cout << "Your grade is 'F' " << endl;
    grade[i] = "F";
}
grade_point[i] = gradePoint(grade[i]);
}
float credit[11] = {3,3,3,2,2,2,1.5,1.5,1.5,1.5,1};
float Total_credit= 0;
float Total_Gradepoint = 0;
for (int i=0;i<11;i++){
Total_credit+=credit[i];
Total_Gradepoint += credit[i]*grade_point[i];
}
cout << " Your total grade point : " << Total_Gradepoint << endl;
cout << " The total credit is : " << Total_credit << endl;
float CGPA = (float) Total_Gradepoint/ (float) Total_credit;
cout << "Your CGPA is : " << CGPA << endl;
return 0;
}
