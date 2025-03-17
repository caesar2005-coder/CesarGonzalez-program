#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//functions
double calculateAverage(double scores[], int numTests);
char determineGrade(double average);
void displayResults(string names[], double averages[], char grades[], int numStudents);

int main(){

    int numOfStudents;

    // Step 1: Ask the user for the number of students
    cout << "Enter the number of students: \n";
    cin >> numOfStudents;

    string studentName[numOfStudents];
    int numOfTestScores[numOfStudents]; 
    double testScore[10][numOfStudents]; 

    // Step 2: Input student names and test scores
    for (int i = 0; i < numOfStudents; i++) {
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> studentName[i];

        cout << "Enter the number of test scores for " << studentName[i] << ": ";
        cin >> numOfTestScores[i];

        // Input test scores for each student
        for (int j = 0; j < numOfTestScores[i]; j++) {
            cout << "Enter test score (0 - 100) for " << studentName[i] << " (Score " << (j + 1) << "): ";
            cin >> testScore[j][i];

            // Validate input
            while (testScore[j][i] < 0 || testScore[j][i] > 100) {
                cout << "Test score not valid. Please enter a score between 0 and 100.\n";
                cout << "Enter test score (0 - 100) for " << studentName[i] << " (Score " << (j + 1) << "): ";
                cin >> testScore[j][i];
            }
        }
    }

    //function code
    double averages[numOfStudents];
    char grades[numOfStudents];
    
    for (int i = 0; i < numOfStudents;~ i++) {
        averages[i] = calculateAverage(testScore[i], numOfTestScores[i]);
        grades[i] = determineGrade(averages[i]);
    }

    // Display results
    displayResults(studentName, averages, grades, numOfStudents);


    return 0;
}
//function input
double calculateAverage(double scores[], int numTests) {
    double total = 0;
    for(int j = 0; j < numTests; j++) {
        total += scores[j];
    }
    return total / numTests;
}

char determineGrade(double average) {
    if (average >= 90) return 'A';
    if (average >= 80) return 'B';
    if (average >= 70) return 'C';
    if (average >= 60) return 'D';
    return 'F';
}


void displayResults (string names [], double averages [], char grades [], int numStudents) {
    cout << "\nResults:" << endl;
    cout << "---------------------------" << endl;
    cout << left << setw(10) << "Student" << " | " << setw(8) << "Average" << " | " << "Grade" << endl;
    cout << "---------------------------" << endl;
    for (int i = 0; i < numStudents; i++) {
    cout << left << setw(10) << names[i] << " | " << setw(8) << fixed << setprecision(2) <<
    averages[i] << " | " << grades[i] << endl;
    }
    cout << "---------------------------"
    << endl;
}

// Cesar Gonzalez
