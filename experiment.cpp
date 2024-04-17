#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_EXPERIMENTS = 3, NUM_READINGS = 3;

int main() {
    int i, j;
    double readingValue, total, average;

    for (i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0;
        cout << "\nExperiment " << i << endl;

        for(j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: ";
            cin >> readingValue;
            total = total + readingValue;
        }

        average = total / NUM_READINGS;

        if (average < 100) {
            cout << "Experiment " << i << " average: ";
            cout << fixed << setprecision(2) << average;
            cout << "\n is below acceptable range." << endl;
        }
        else if (average >= 100 && average <= 300) {
            cout << "Experiment " << i << " average: ";
            cout << fixed << setprecision(2) << average;
            cout << "\n is within acceptable range." << endl;
        }
        else {
            cout << "Experiment " << i << " average: ";
            cout << fixed << setprecision(2) << average;
            cout << "\n is above acceptable range." << endl;
        }
    }
    return 0;
}