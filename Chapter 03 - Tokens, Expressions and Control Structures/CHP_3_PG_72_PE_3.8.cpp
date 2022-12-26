/*Write a program to print a table of values of the function y=exp{-x} for x varying from 0 to 1o in steps of 0.1*/

//macro declaration
#define E 2.72

//heaeder files
#include <iostream>
#include <cmath>
#include <iomanip>

//namespace
using namespace std;

//class
class exp
{
public: //public datas

    //variables
    float x;

    //members
    void calc();
};

void exp::calc()
{
    //function to compute and output
    cout<<setw(5)<<"X"
        <<setw(12)<<"Y=exp{-X}"<<endl;

    //computing
    for(x=0;x<=10.0;x+=0.1)
    {        
        cout<<setw(5)<<setprecision(1)<<x
            <<fixed<<setprecision(5)<<setw(10)<<(pow(E,-1*x))<<endl;
    }
}

int main()
{
    //main function

    //object
    class exp e;

    //calling out the member
    e.calc();

    return 0;
}
