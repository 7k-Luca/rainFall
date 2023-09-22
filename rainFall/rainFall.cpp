#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 12;
    double rainFall[SIZE];
    int count, lowest, highest;
    double total, average;
    total = 0;
    lowest = rainFall[0];
    highest = rainFall[0];
    string months[12] = { "January",   "February", "March",    "April",
                         "May",       "June",     "July",     "August",
                         "September", "October",  "November", "December" };

    for (count = 0; count < SIZE; count++) {

        cout << "Enter rainfall for " << months[count] << ": ";
        cin >> rainFall[count];
        while (rainFall[count] < 0) {
            cout << "Invalid data (negative rainfall) -- retry value: ";
            cin >> rainFall[count];
        }
        if (rainFall[count] > highest) {
            highest = rainFall[count];
        }
        if (rainFall[count] < lowest) {
            lowest = rainFall[count];
        }
        total += rainFall[count];
    }
    average = total / SIZE;
    cout << "Total rainfall: " << total << endl;
    cout << "Average rainfall: " << average << endl;
    cout << "Least rainfall in: " << lowest << endl;
    cout << "Most rainfall in: " << highest << endl;
}