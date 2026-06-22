#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to convert grade to grade point
int gradePoint(string grade)
{
    if (grade == "O")
        return 10;
    else if (grade == "A+")
        return 9;
    else if (grade == "A")
        return 8;
    else if (grade == "B+")
        return 7;
    else if (grade == "B")
        return 6;
    else if (grade == "C")
        return 5;
    else
        return 0; // F grade
}

// Function to calculate grade from marks
string calculateGrade(int marks)
{
    if (marks >= 90)
        return "O";
    else if (marks >= 80)
        return "A+";
    else if (marks >= 70)
        return "A";
    else if (marks >= 60)
        return "B+";
    else if (marks >= 50)
        return "B";
    else if (marks >= 35)
        return "C";
    else
        return "F";
}

int main()
{
    int numTheory, numLabs;

    vector<string> subjectNames;
    vector<float> credits;
    vector<string> grades;
    vector<int> gradePoints;

    float totalCredits = 0, totalGradePoints = 0;

    // THEORY SUBJECTS
    cout << "Enter number of Theory Subjects: ";
    cin >> numTheory;
    cin.ignore();

    for (int i = 0; i < numTheory; i++)
    {
        string name;
        int assignment, midsem, endsem;
        float credit;

        cout << "\nEnter Theory Subject " << i + 1 << " Name: ";
        getline(cin, name);

        do
        {
            cout << "Assignment Marks (0-20): ";
            cin >> assignment;
        } while (assignment < 0 || assignment > 20);

        do
        {
            cout << "Mid-Sem Marks (0-30): ";
            cin >> midsem;
        } while (midsem < 0 || midsem > 30);

        do
        {
            cout << "End-Sem Marks (0-50): ";
            cin >> endsem;
        } while (endsem < 0 || endsem > 50);

        cout << "Enter Credit for " << name << ": ";
        cin >> credit;
        cin.ignore();

        int total = assignment + midsem + endsem;
        string grade = calculateGrade(total);
        int gp = gradePoint(grade);

        subjectNames.push_back(name);
        credits.push_back(credit);
        grades.push_back(grade);
        gradePoints.push_back(gp);
    }

    // LAB SUBJECTS
    cout << "\nEnter number of Labs: ";
    cin >> numLabs;
    cin.ignore();

    for (int i = 0; i < numLabs; i++)
    {
        string labName;
        int marks;
        float credit;

        cout << "\nEnter Lab " << i + 1 << " Name: ";
        getline(cin, labName);

        do
        {
            cout << "Enter Total Marks (0-100): ";
            cin >> marks;
        } while (marks < 0 || marks > 100);

        cout << "Enter Credit for " << labName << ": ";
        cin >> credit;
        cin.ignore();

        string grade = calculateGrade(marks);
        int gp = gradePoint(grade);

        subjectNames.push_back(labName);
        credits.push_back(credit);
        grades.push_back(grade);
        gradePoints.push_back(gp);
    }

    // COMPULSORY ACTIVITY
    int choice;

    do
    {
        cout << "\nChoose Any ONE Extra Activity (Compulsory)\n";
        cout << "1. Yoga\n";
        cout << "2. NCC\n";
        cout << "3. NSS\n";
        cout << "Enter choice: ";
        cin >> choice;

    } while (choice < 1 || choice > 3);

    string activity;

    switch (choice)
    {
    case 1:
        activity = "Yoga";
        break;
    case 2:
        activity = "NCC";
        break;
    case 3:
        activity = "NSS";
        break;
    }

    int activityMarks;
    float activityCredit;

    do
    {
        cout << "Enter Marks in " << activity << " (0-100): ";
        cin >> activityMarks;
    } while (activityMarks < 0 || activityMarks > 100);

    cout << "Enter Credit for " << activity << ": ";
    cin >> activityCredit;

    subjectNames.push_back(activity);
    credits.push_back(activityCredit);
    grades.push_back(calculateGrade(activityMarks));
    gradePoints.push_back(
        gradePoint(calculateGrade(activityMarks)));

    // CGPA CALCULATION
    for (int i = 0; i < subjectNames.size(); i++)
    {
        totalCredits += credits[i];
        totalGradePoints += credits[i] * gradePoints[i];
    }

    // RESULT DISPLAY
    cout << "\n\n========== RESULT ==========\n";

    for (int i = 0; i < subjectNames.size(); i++)
    {
        cout << subjectNames[i]
             << " --> Grade: "
             << grades[i]
             << " (GP: "
             << gradePoints[i]
             << ")\n";
    }

    float CGPA = totalGradePoints / totalCredits;

    cout << "\nTotal Credits      : " << totalCredits;
    cout << "\nTotal Grade Points : " << totalGradePoints;
    cout << "\nCGPA               : " << CGPA << endl;

    return 0;
}
