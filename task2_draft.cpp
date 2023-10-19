#include<iostream>
using namespace std;
void calculator();
int main()
{
    int a , b;
    char operation;
    int answer ;
    cout<<"*********BASIC CALCULATOR*********"<<endl<<endl;
    cout<<"Enter The Numbers a & b "<<endl;
    cin>>a>>b;
    cout<<"Enter the Operation"<<endl;
    cin>>operation;

    if(operation == '+')
    {
        answer = a+b;
        cout<<"a + b "<<"= "<<answer;
    }
    else if(operation == '-')
    {
        answer = a-b;
        cout<<"a - b "<<"= "<<answer;
    }
    else if(operation == '*')
    {
        answer = a*b;
        cout<<"a * b "<<"= "<<answer;
    }
    else if(operation == '/')
    {
        answer = a/b;
        cout<<"a / b "<<"= "<<answer;
    }
    else
    {
        cout<<"WRONG INPUT";
    }
    return 0;
}
/*
// C++ Program to Perform Arithmetic Operations using Switch Case
#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, q, opt;

    cout << "Enter any two numbers:\n";
    cin >> p >> q;

    cout << "\n######## Choose a option from these ########\n\n";
    cout << "1 - To do sum operation on two numbers\n";
    cout << "2 - To do differences operation on two numbers\n";
    cout << "3 - To do multiplication operation on two numbers\n";
    cout << "4 - To do division operation on two numbers\n";
    cout << "5 - To do modulus operation on two numbers\n\n";

    cin >> opt;
    cout << endl;

    // It will perform the all arithmetic operations on the basis of selected option
    switch (opt) {
        case 1: {
            int sum = p + q;
            cout << "SUM:\t" << p << " + " << q << " = " << sum << "\n";
            break;
        }

        case 2: {
            int sub = p - q;
            cout << "DIFFERENCE:\t" << p << " - " << q << " = " << sub << "\n";
            break;
        }

        case 3: {
            int mul = p * q;
            cout << "PRODUCT:\t" << p << " * " << q << " = " << mul << "\n";
            break;
        }

        case 4: {
            float div = (float)p / q;
            cout << "QUOTIENT:\t" << p << " / " << q << " = " << div << "\n";
            break;
        }

        case 5: {
            int mod = p % q;
            cout << "MODULUS:\t" << p << " % " << q << " = " << mod << "\n";
            break;
        }

        default:
            cout << "You choosed the wrong option!\n";
    }

    return 0;
}
*/
