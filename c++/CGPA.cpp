#include <iostream>
#include <string>
using namespace std;

int gradePoint(string grade) {
    if (grade == "O") return 10;
    else if (grade == "A+") return 9;
    else if (grade == "A") return 8;
    else if (grade == "B+") return 7;
    else if (grade == "B") return 6;
    else if (grade == "C") return 5;
    else return 0;
}

string calculateGrade(int total) {
    if (total >= 90) return "O";
    else if (total >= 80) return "A+";
    else if (total >= 70) return "A";
    else if (total >= 60) return "B+";
    else if (total >= 50) return "B";
    else if (total >= 35) return "C";
    else return "F";
}

int main() {

    string branch;
    int theoryCount, labCount;

    cout << "Enter Branch Name: ";
    getline(cin, branch);

    cout << "Enter number of theory subjects: ";
    cin >> theoryCount;

    cout << "Enter number of labs: ";
    cin >> labCount;

    int totalSubjects = theoryCount + labCount;

    string subject[25];
        int marks[25];
        float credit[25];
        string grade[25];
        int grade_point[25];


    // THEORY SUBJECTS
    for (int i = 0; i < theoryCount; i++) {
        cin.ignore();
        cout << "\nEnter subject name: ";
        getline(cin, subject[i]);

        int assignment, mid, endsem;
        cout << "Assignment (0-20): ";
        cin >> assignment;
        cout << "Mid-sem (0-30): ";
        cin >> mid;
        cout << "End-sem (0-50): ";
        cin >> endsem;

        marks[i] = assignment + mid + endsem;

        cout << "Enter credit for " << subject[i] << ": ";
        cin >> credit[i];
    }

    // LAB SUBJECTS
    for (int i = theoryCount; i < totalSubjects; i++) {
        cin.ignore();
        cout << "\nEnter lab name: ";
        getline(cin, subject[i]);

        cout << "Enter total marks (out of 100): ";
        cin >> marks[i];

        cout << "Enter credit for " << subject[i] << ": ";
        cin >> credit[i];
    }
        // EXTRA CURRICULAR ACTIVITY
        char hasActivity;
        cout << "\nDo you have extra-curricular activity (Y/N)? ";
        cin >> hasActivity;

        if (hasActivity == 'Y' || hasActivity == 'y') {
            cin.ignore();
            cout << "Enter activity name (Yoga / NCC / NSS): ";
            getline(cin, subject[totalSubjects]);

            cout << "Enter marks (out of 100): ";
            cin >> marks[totalSubjects];

            cout << "Enter credit : ";
            cin >> credit[totalSubjects];

    totalSubjects++;   
}
    // GRADE CALCULATION
    float totalCredit = 0, totalGradePoint = 0;

    cout << "\n------ RESULT ------\n";

    for (int i = 0; i < totalSubjects; i++) {
        grade[i] = calculateGrade(marks[i]);
        grade_point[i] = gradePoint(grade[i]);

        cout << subject[i] << " : " << grade[i] << endl;

        totalCredit += credit[i];
        totalGradePoint += credit[i] * grade_point[i];
    }

    float CGPA = totalGradePoint / totalCredit;

    cout << "\nBranch: " << branch << endl;
    cout << "Total Credits: " << totalCredit << endl;
    cout << "CGPA: " << CGPA << endl;

    return 0;
}