/*Write a program to read the names of users and numbers of units consumed and print out the charges with names.
Rules--
For the first 100 units - 60P per unit
For the next 200 units - 80P per unit
Beyond 300 units - 90P per unit

All users are charged minimum of Rs. 50. If the total amount is more than Rs.300 then an additional surcharge of 15% is
added.*/

//header file
#include <iostream>

//namespace
using namespace std;

//class
class elec
{
private: //private data
    
    //variables
    char fname[20];
    char lname[20];
    float unit;

public: //public data

    //array for storing rates
    float rate[3][2]={
                    100,0.60,
                    200,0.80,
                    300,0.90,
                        };
    
    //members
    void input();
    void clac_unit();
};

void elec::input()
{
    //function to input datas
    cout<<"Enter your full name: ";
    cin>>fname>>lname;
    cout<<"Enter numbers of units consumed: ";
    cin>>unit;
}
void elec::clac_unit()
{
    //function to calculate the total charges
    float res=0;

    if(unit<=100)
    {
        //if the consumed unit is less than 100
        res+=unit*rate[0][1];

        //users are charged at least 50 INR
        if(res<50)
            res=50;
    }
    else if(unit>=300)
    {
        //if the consumed unit is greater than 300

        //calculating the charges for units more than 300
        unit-=300;
        res+=unit*rate[2][1];

        res+=200*rate[1][1]; //for the next 200 units
        res+=100*rate[0][1]; //for the first 100 units
    }
    else if(unit>=100)
    {
        //if the consumed unit is greater than 100 (but less than 300, as we first checked if it is greater or not than 300)
        
        //calculating charges for the more than 100 units(i.e next 200 units)
        unit-=100;
        res+=unit*rate[1][1];
        
        res+=100*rate[0][1]; //for the first 100
    }

    //outputting
    cout<<endl<<"Name - "<<fname<<" "<<lname<<endl
        <<"Charges (INR) = "<<res<<endl;
}

int main()
{
    //main function

    //object
    class elec e;

    //calling out the functions
    e.input();
    e.clac_unit();

    return 0;
}