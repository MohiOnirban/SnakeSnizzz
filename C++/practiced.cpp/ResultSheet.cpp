#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main() {
    int numSubjects;
    cout << "\n================= RESULT INPUT =================\n";
    
    string getStudentName, getStudentid;
    cout<<"Student Name: "; 
    cin>> getStudentName; 
    cout<<"Student ID: "; cin>> getStudentid;
    
    // Ask for the number of subjects
    cout << "\nEnter the number of subjects: ";
    cin >> numSubjects;

    // Declare arrays for subject names and marks
    string subjects[numSubjects];  
    int marks[numSubjects];

    // Taking input for subjects and marks
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter subject " << i + 1 << " name: ";
        cin >> subjects[i]; // Input subject name

        cout << "Enter marks for " << subjects[i] << ": ";
        cin >> marks[i]; // Input marks
    }

    // Calculate total and average
    int total = 0;
    for (int i = 0; i < numSubjects; i++) {
        total += marks[i];
    }

    double average = (total) / numSubjects;

    // Determine the grade
    char grade;
    if (average >= 90) grade = 'A';
    else if (average >= 80) grade = 'B';
    else if (average >= 70) grade = 'C';
    else if (average >= 60) grade = 'D';
    else grade = 'F';

    // Display results
    cout << "\n================= RESULT SHEET =================\n";
    cout << left << setw(20) << "Student:" << setw(10) << getStudentName << endl;
    cout << left << setw(20) << "Studnet ID:" << setw(10) << getStudentid << endl;
    cout << left << setw(20) << "Subject" << setw(10) << "Marks" << endl;
    cout << "---------------------------------------------\n";
    for (int i = 0; i < numSubjects; i++) {
        cout << left << setw(20) << subjects[i] << setw(10) << marks[i] << endl;
    }
    cout << "---------------------------------------------\n";
    cout << left << setw(20) << "Total Marks: " << total << setw(10)<< endl;
    cout << left << setw(20)<< "Average Marks: " << average << setw(10)<< endl;
    cout << left << setw(20)<< "Grade: " << grade << setw(10)<< endl;
    cout << "=============================================\n";

    return 0;
}