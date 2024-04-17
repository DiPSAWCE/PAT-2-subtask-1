#include <iostream>
#include <iomanip> // Include header for setprecision
using namespace std;

const int NUM_EXPERIMENTS = 3, NUM_READINGS = 3;

int main() {
    int i, j;
    double readingValue, total, average;

    // Loop for each experiment
    for (i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0; // Reset total for each experiment
        cout << "\nExperiment " << i << endl;

        // Loop for taking readings
        for (j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: ";
            cin >> readingValue;
            total += readingValue; // Accumulate reading values
        }

        average = total / NUM_READINGS; // Calculate average for the experiment

        // Check if the average is below the acceptable range
        if (average < 100) {
            cout << "Experiment " << i << " average: ";
            cout << fixed << setprecision(2) << average;
            cout << "\n is below acceptable range." << endl;
        }
        // Check if the average is within the acceptable range
        else if (average >= 100 && average <= 300) {
            cout << "Experiment " << i << " average: ";
            cout << fixed << setprecision(2) << average;
            cout << "\n is within acceptable range." << endl;
        }
        // Otherwise, the average is above the acceptable range
        else {
            cout << "Experiment " << i << " average: ";
            cout << fixed << setprecision(2) << average;
            cout << "\n is above acceptable range." << endl;
        }
    }
    return 0;
}
