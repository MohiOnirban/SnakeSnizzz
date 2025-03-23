#include <iostream>
#include <iomanip>  // For output formatting
using namespace std;

// function to calculate grade based on marks 
 char calculateGrade ( float avg ){
    if ( avg >= 90 ) return 'A'; 
    else if ( avg >= 80 ) return 'B';
    else if ( avg >= 70 )return 'C';
    else if ( avg >= 60 )return 'D';
    else return 'F';
 }
 int main (){
    int studentID , numSubjects ; 
    string studentName ;

    cout <<" Enter student ID: " ;
    cin >> studentID ;
    cin.ignore();// Clears the newline character left by `cin` to avoid issues with `getline()`
    cout <<" Enter student Name: ";
    getline(cin, studentName); // Using `getline` to allow spaces in the name

    cout <<"\nEnter the number of subjects : ";
    cin>> numSubjects ;

     // Declaring arrays to store subject names and corresponding marks
    string subjects [numSubjects];
    int marks [ numSubjects ];

    

    for (int i =0; i < numSubjects ; i++ ) // Loop to collect subject names and marks
    {
        cout <<"Enter subject " << i + 1 << " name: ";
        cin >> ws ;// Clears any leading whitespace
        getline (cin, subjects [i]); // Stores subject name in the array
        cout <<"Enter marks for" << subjects [i] << ":"; // Stores subject name in array
        cin >> marks [i];// Stores marks in array
    }

    // Calculate total and average

    int totalMarks =0 ;
    for ( int i = 0 ; i < numSubjects ; i++){// Loop to calculate the total marks
        totalMarks += marks [i];// Summing all marks
    }
    float averageMarks = static_cast<float>(totalMarks) / numSubjects ;/*static_cast<float>(totalMarks) converts totalMarks 
    into a floating-point number (float).*/


    // Display the result sheet

    cout << "\n ------------------------------------------\n";
    cout << "              RESULTS SHEET "<<endl;
    cout << "-------------------------------------------\n";
    cout << " STUDENT ID : " << studentID << endl ;
    cout << " STUDENT NAME : " << studentName << endl ;
    cout << "-------------------------------------------\n";
    cout << left << setw(20) << "SUBJECT" << setw(10) << " MARKS " << endl;
    cout << "-------------------------------------------\n";

    for ( int i = 0 ; i < numSubjects ; i++ ){
        cout << left << setw(20) << subjects [i] << setw(10) << marks[i] << endl;
    }
    
    cout << "-------------------------------------------\n";
    cout << left << setw(20) << "Total Marks :" << setw(10) << totalMarks << endl ; 
    cout << left << setw(20) << "Average Marks :" << setw(10) << setprecision(2) << averageMarks << endl ; 
    cout << left << setw(20) << "Grade:" << calculateGrade(averageMarks) << endl ;
    cout << "--------------------------------------------\n";

    //setw(n) → Sets minimum width for the next output.;Aligns text nicely for structured output.
    // Use left to left-align text (default is right-aligned).
    return 0;
    
     }