//program that converts temperature from Fahrenheit to Celsius
#include <iostream>
using namespace std;

int main()
{
    //declare variables and initialize them
    double farTemp, CelsiusTemp = 0;

    //output instructions to user
    cout << "Welcome to our Fahrenheit to Celsius Temprature Convertor!\n";

    cout << "Please input your temperature (It is always assumed as Fahrenheit)\n";
    cin >> farTemp;

    // compute the conversion
    CelsiusTemp = 5.0 / 9.0 * (farTemp - 32.0);

    //output results to user
    cout << farTemp << "°F Fahrenheit converted to Celsius is " << CelsiusTemp << "°C \n";

    return 0;
}