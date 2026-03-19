#include <iostream>
using namespace std;

int main() {
    int n;
    float grade, credit;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;

        cout << "Enter grade point: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nTotal Grade Points: " << totalGradePoints;
    cout << "\nCGPA: " << cgpa << endl;

    return 0;
}
