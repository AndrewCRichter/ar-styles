#include <iostream>
#include "Temperature.h"

using namespace std;

int main() {
    int choice = 0;
    cout << "Enter 0 for celsius or 1 for fahrenheit: ";
    while (!(cin >> choice))
    {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout << "You must enter a number: ";
    }
    int temperature = 0;
    cout << "Enter a temperature: ";
    while (!(cin >> temperature))
    {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout << "You must enter a number: ";
    }
    Temperature my_temperature;
    (choice == 1) ? my_temperature.set_fahrenheit(temperature) : my_temperature.set_celsius(temperature);
    string my_string;
    if (my_temperature.get_celsius() < 0)
        my_string="cold";
    else if (my_temperature.get_celsius() > 30)
        my_string="hot";
    else
        my_string="beautiful";
    cout << "Hello, " << my_string << " World!" << endl;
    return 0;
}