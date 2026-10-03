// Nathan
// Ouk
// 0834524@my.msjc.edu
// Assignmnet #8
// Assignment #8 - Programming with Functions.cpp : This file contains the 'main' function. Program execution begins and ends there. Assignment #8 - Create a temperature conversion program converting Celsius, Kelvin, and Newton to Fahrenheit, using functions. 
//

#include <iostream>
double C2F(double temperature);

double K2F(double temperature);

double N2F(double temperature);

int main()
{
    using namespace std;
    char unit;
    double temperature;
    double Fahrenheit;

    {
        cout << "Welcome to the Temperature 2 Fahrenheit Calculator !\n";
        cout << endl;
        cout << "First, insert the temperature you would like to convert. And then either C for Celsius, K for Kelvin, or N for Newton." << endl;
        cout << endl;
        cout << "For example, 60 C" << endl;
        cout << endl;

        cout << "Please enter temperature and the unit below.\n";
        cout << endl;
        cout << "If you changed your mind, then enter a number, with 'X' or 'x' as the unit to eXit the program.\n";
        cout << endl;

        cin >> temperature >> unit;
        cout << endl;

        while (unit != 'X' && unit != 'x')
        { 
            if ((unit == 'c') || (unit == 'C'))
            {
                Fahrenheit = C2F(temperature);
                cout << Fahrenheit << " Fahrenheit.\n";
            }

            if ((unit == 'k') || (unit == 'K'))
            {
                Fahrenheit = K2F(temperature);
                cout << Fahrenheit << " Fahrenheit.\n";
            }

            if ((unit == 'n') || (unit == 'N'))
            {
                Fahrenheit = N2F(temperature);
                cout << Fahrenheit << " Fahrenheit.\n"; 
            }

            if ((unit == 'x') || (unit == 'X'))
            {
                cout << endl;
                cout << "The program has ended.\n";
            }

            cout << endl; 
            cin >> temperature >> unit;
            cout << endl;

            }
        }
    }


double C2F(double temperature)
{
    return (temperature * 9 / 5) + 32;
}

double K2F(double temperature)
{
    return (temperature - 273.15) * 1.8000 + 32;
}

double N2F(double temperature)
{
    return (temperature * 60 / 11) + 32;
}
