#include"mytemperature.h"
#include <iostream>
#include <iomanip>
using namespace std;
double celsius_to_fah(double cel) {
    return (cel * 9 / 5) + 32;
}

double fahrenheit_to_cels(double fah) {
    return (fah - 32) * 5 / 9;
}
int main() {
    cout << setw(10) << "Celsius" << setw(15) << "Fahrenheit" << setw(15) << "|" << setw(15) << "Fahrenheit" << setw(15) << "Celsius" << endl;
    cout << setfill('-') << setw(60) << "-" << setfill(' ') << endl;

    for (double celsius = 40.0; celsius >= 31.0; celsius -= 1.0) {
        double fahrenheit = celsius_to_fah(celsius);
        cout << setw(10) << fixed << setprecision(1) << celsius << setw(15) << fixed << setprecision(1) << fahrenheit;
        cout << setw(15) << "|" << setw(15) << fixed << setprecision(1) << fahrenheit << setw(15) << fixed << setprecision(2) << fahrenheit_to_cels(fahrenheit) << endl;
    }

    return 0;
}