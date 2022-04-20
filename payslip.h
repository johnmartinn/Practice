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

using namespace std;

class Payslip
{
    private:
        string mName;
        string mPaygrade;
	    float mBasicsalary, mOThours, mOTpay, mGrosspay, mNetpay, mWithholdingtax, mTaxrate;
        double sss = 500, pagibig = 200, philhealth = 100;

    public:
        Payslip(string Name, float OThours, float Basicsalary)
        {
            mName = Name;
            mBasicsalary = Basicsalary;
            mOThours = OThours;

            cout << "Employee Name : " << mName << endl;
            cout << "Basic salary : " << mBasicsalary << endl;
            cout << "Number of OT hours: " << mOThours << endl;
        }
    
    void ComputePay();
    int PayGradeTaxRate();
    };

int Payslip::PayGradeTaxRate()
    {
        if ((mBasicsalary >= 10000) && (mBasicsalary < 15000))
            {
            mPaygrade = "A";
            mTaxrate = 0.10;
            }

        else if ((mBasicsalary >= 15000) && (mBasicsalary < 20000))
            {
            mPaygrade = "B";
            mTaxrate = 0.10;
            }

        else if ((mBasicsalary >= 20000) && (mBasicsalary < 25000))
            {
            mPaygrade = "A";
            mTaxrate = 0.15;
            }

        else if ((mBasicsalary >= 25000) && (mBasicsalary < 30000))
            {
            mPaygrade = "B";
            mTaxrate = 0.15;
            }

        else if ((mBasicsalary >= 30000) && (mBasicsalary < 35000))
            {
            mPaygrade = "A";
            mTaxrate = 0.20;
            }

        else if ((mBasicsalary >= 35000) && (mBasicsalary < 40000))
            {
            mPaygrade = "B";
            mTaxrate = 0.20;
            }

        else if ((mBasicsalary >= 40000) && (mBasicsalary < 45000))
            {
            mPaygrade = "A";
            mTaxrate = 0.25;
            }
        
        else if ((mBasicsalary >= 45000) && (mBasicsalary < 50000))
            {
            mPaygrade = "B";
            mTaxrate = 0.25;
            }
    
        else if ((mBasicsalary >= 50000) && (mBasicsalary < 55000))
            {
            mPaygrade = "A";
            mTaxrate = 0.30;
            }
    
            else if (mBasicsalary >= 55000) 
            {
            mPaygrade = "B";
            mTaxrate = 0.30;
            }

            return 0;
    };

    void Payslip::ComputePay()
    {
           
        mGrosspay = mBasicsalary + mOTpay;
        mOTpay = mOThours * (0.01 * mBasicsalary);
        mNetpay = mGrosspay - mWithholdingtax - sss - pagibig - philhealth;
        mWithholdingtax = mGrosspay * mTaxrate;

        cout << "Employee Name :" << mName << endl;
        cout << "Basic Salary :" << mBasicsalary << " PHP" << endl;
        cout << "Pay Grade :" << mPaygrade << endl;
        cout << "No. of OT Hours :" << mOThours << endl;
        cout << "OT Pay :" << mOTpay << " PHP"<< endl;
        cout << "Gross Pay :" << mGrosspay << " PHP" << endl;
        cout << "Withholding Tax :" << mWithholdingtax << " PHP" << endl;
        cout << "Net Pay :" << mNetpay << " PHP"<< endl;
    }


    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
