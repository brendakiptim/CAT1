//program to calculate area and volume of a cylinder
#include <iostream>
using namespace std;

int main()
{
    //initialize and declare variables
    double pie = 3.141592;
    double height, radius, volume, area = 0;

    //output instructions to user
    cout << "Welcome to our volume and area cyclinder calculations!\n";
    cout << "Please enter the height of the cylinder?\n";
    cin >> height;
    cout << "Please enter the radius of the cylinder?\n";
    cin >> radius;

    //compute both the volume and area
    area = 2 * pie * radius * height + 2 * pie * radius * radius;
    volume = pie * radius * radius * height;

    //output results to user
    cout << "The volume of the cylinder is " << volume << " and the area of the cylinder is " << area << " \n";
    return 0;
}