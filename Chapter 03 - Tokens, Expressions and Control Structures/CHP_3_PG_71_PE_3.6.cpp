/*A circket team has the following table of batting figures for a series of test matches:

Player-Runs-Innings-Times not out
Sachin-8430-230-18
Saurav-4200-130-9
Rahul-3350-105-11

Write a program to read the figures set out in the above form, to calculate the batting averages and to print out the complete 
including the averages.*/

//header files
#include <iostream>
#include <iomanip>

#define N 3 //number of players

//namespace
using namespace std;

//data structure
struct player
{
    char name[10];
    int runs;
    int ings;
    int tno;
    float avg_batt;
};

//class
class data
{
private: //private data
    struct player p[N];

public: //public methods  
    void input();
    void compute_data();
    void output();
};

void data::input()
{
    //function to input player datas
    for(int i=0;i<N;i++)
    {
        cout<<"Player No: "<<(i+1)<<endl<<"Player Name: ";
        cin>>p[i].name;
        cout<<"Runs: ";
        cin>>p[i].runs;
        cout<<"Innings: ";
        cin>>p[i].ings;
        cout<<"Times not out: ";
        cin>>p[i].tno;
        cout<<endl;
    }
}

void data::compute_data()
{
    //function to compute the average batting
    for(int i=0;i<N;i++)
    {
        p[i].avg_batt=p[i].runs/(p[i].ings-p[i].tno);
    }
}

void data::output()
{
    //function to display/output computed data
    cout<<setw(8)<<"Name"<<setw(8)<<"Runs"<<setw(8)<<"Innings"<<setw(15)<<"Times not out"
        <<setw(13)<<"Avg. Batting"<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<setw(8)<<p[i].name
            <<setw(8)<<p[i].runs
            <<setw(8)<<p[i].ings
            <<setw(15)<<p[i].tno
            <<fixed<<setprecision(3)<<setw(13)<<p[i].avg_batt<<endl;
    }
}

int main()
{
    //main function

    //object
    class data d;

    //calling out the functions
    d.input();
    d.compute_data();
    d.output();

    return 0;
}


