// Emerson Racca
// 09/01/2021
// Lab 3c: Fahrenheit to Celsius

/*
Create a program that makes use of a regular function that converts degrees Fahrenheit to degrees Celsius.
This function should return the result (In other words, no cout in this function).

1. Tell the user what the program does.
2. Prompt the user for the temperature in degrees Fahrenheit.
3. Display the Celsius equivalent to the user.

Please separate the function interface from the implementation.
In other words, place the function prototype at the top and the actual function below the main function at the bottom.
*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double FahrenheitToCelcius (double F);

int main(void){
    
    double TempF;
    
    cout << "Fahrenheit to Celsius Converter\n\n" << endl;
    
    cout << "What is the temperature in degrees Fahrenheit? ";
    cin >> TempF;
    
    cout << "\n" << TempF << " degrees Fahrenheit = " << FahrenheitToCelcius(TempF) << " degrees Celsius";
    
    return 0;
    
}

double FahrenheitToCelcius(double F){
    return (5.0 / 9 * (F - 32));  
}
