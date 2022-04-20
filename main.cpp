/* ****************************************************************
 * @author: GALANG, John Martin
 * @app name: <your application name here>
 * @app desc: Laboratory Exercise
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include "payslip.h"

using namespace std;

    int main()
    {
        string Name;
        double Basicsalary, OThours;
       
            cout << "Employee Name : " ;
            getline(cin, Name);
            cout << "Basic salary : " ; 
            cin >> Basicsalary;
            cout << "Number of OT hours: " ;
            cin >> OThours;

        if (Basicsalary < 10000)
        {
            cout << "Invalid Input, please re-enter a salary above 10,000PHP" << endl;
            cin >> Basicsalary;
        }

        Payslip employee(Name, OThours, Basicsalary);
        employee.PayGradeTaxRate();
        employee.ComputePay();

        return  EXIT_SUCCESS;
    }

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
