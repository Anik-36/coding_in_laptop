#include <iostream>
using namespace std;

double inchesToFeet(double inches) {
    return inches / 12;
}

double poundsToKilograms(double pounds) {
    return pounds * 0.453592;
}

int main() {
    int choice;
    double value;

    cout << "Welcome to the Standard Converter!" << endl;
    cout << "Select a conversion type:" << endl;
    cout << "1. Inches to Feet" << endl;
    cout << "2. Pounds to Kilograms" << endl;
    cout << "Enter the number of your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the value in inches: ";
        cin >> value;
        cout << value << " inches is " << inchesToFeet(value) << " feet." << endl;
    } else if (choice == 2) {
        cout << "Enter the value in pounds: ";
        cin >> value;
        cout << value << " pounds is " << poundsToKilograms(value) << " kilograms." << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
