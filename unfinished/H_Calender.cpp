#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int dayOfWeek(int d, int m, int y) {
    if (m < 3) {
        m += 12;
        y--;
    }
    int day = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    return day;
}

void printCalendar(int day, int daysInMonth) {
    cout << "|---------------------------|" << endl;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
    cout << "|---------------------------|" << endl;

    int currentDay = 1;

    for (int i = 0; i < 5; ++i) {
        cout << "|";
        for (int j = 0; j < 7; ++j) {
            if ((i == 0 && j < day) || currentDay > daysInMonth) {
                cout << " - ";
            } else {
                cout << setw(2) << currentDay;
                currentDay++;
            }
            cout << "|";
        }
        cout << endl;
        cout << "|---------------------------|" << endl;
    }
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after T

    for (int t = 0; t < T; ++t) {
        string date, dayName;
        getline(cin, date, ' ');
        cin >> dayName;

        stringstream ss(date);
        int day, month, year;
        char discard;
        ss >> day >> discard >> month >> discard >> year;

        int firstDayOfMonth = dayOfWeek(1, month, year);
        printCalendar(firstDayOfMonth, daysInMonth(month, year));
        cout << endl;
    }

    return 0;
}
