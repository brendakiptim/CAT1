//program to compute new net pay and the tax owed to the government
#include <iostream>
using namespace std;

int main()
{
    //initialize and declare variables
    float taxRate = 0.25;
    float grossSalary = 10000;
    float netSalary, paye = 0;

    //compute tax paid to governemt
    paye = grossSalary * taxRate;

    //compute net salary
    netSalary = grossSalary - paye;

    cout << "Given that the tax is " << taxRate * 100 << "% and the employee gross salary is " << grossSalary << "Ksh:\n";
    cout << "The PAYE is " << paye << " and the employee net salary is " << netSalary << "Ksh \n";

    return 0;
}