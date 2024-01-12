#include <iostream>
#include <string>

using namespace std;

int main() {
    const int NUM_QUARTERS = 4;
    const int NUM_SUBJECTS = 5;

    string subjects[NUM_SUBJECTS] = {"English", "Math", "Science", "Filipino", "PE"};
    double totalGrades[NUM_QUARTERS] = {0};

    for (int quarter = 1; quarter <= NUM_QUARTERS; ++quarter) {
        cout << "Enter grades for Quarter " << quarter << ":\n";

        for (int subjectIndex = 0; subjectIndex < NUM_SUBJECTS; ++subjectIndex) {
            double grade;
            cout << subjects[subjectIndex] << ": ";
            cin >> grade;

            if (grade >= 0 && grade <= 100) {
                totalGrades[quarter - 1] += grade;
            } else {
                cout << "Invalid grade! Please enter a grade between 0 and 100.\n";
                --subjectIndex; /
            }
        }

        if (quarter < NUM_QUARTERS) {
            char proceed;
            cout << "Do you want to enter grades for the next quarter? (y/n): ";
            cin >> proceed;

            if (proceed != 'y' && proceed != 'Y') {
                break; 
            }
        }
    }

    double overallAverage = 0;
    for (int quarter = 0; quarter < NUM_QUARTERS; ++quarter) {
        overallAverage += totalGrades[quarter];
    }

    overallAverage /= (NUM_QUARTERS * NUM_SUBJECTS);

    cout << "Overall Average: " << overallAverage << endl;

    return 0;
}
