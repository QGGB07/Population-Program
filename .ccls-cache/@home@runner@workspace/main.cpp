#include <iostream>
using namespace std;

int main() {
    int startSize, days;
    double dailyIncrease;

    // Get starting size
    cout << "Enter starting number of organisms (min 2): ";
    cin >> startSize;
    while (startSize < 2) {
        cout << "Invalid. Enter a number 2 or greater: ";
        cin >> startSize;
    }

    // Get daily increase
    cout << "Enter average daily increase (as %): ";
    cin >> dailyIncrease;
    while (dailyIncrease < 0) {
        cout << "Invalid. Enter a non-negative number: ";
        cin >> dailyIncrease;
    }

    // Get number of days
    cout << "Enter number of days they will multiply (min 1): ";
    cin >> days;
    while (days < 1) {
        cout << "Invalid. Enter a number 1 or greater: ";
        cin >> days;
    }

    double population = startSize;

    // Display population each day
    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << ": " << population << endl;
        population += population * (dailyIncrease / 100);
    }

    return 0;
}
