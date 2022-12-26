/*Write a program to calculate the variance and standard deviation of N numbers.*/

//header files
#include <iostream>
#include <cmath>

//namespace
using namespace std;

//class
class stat
{
private: //private data

    //variables
    int n;
    float *p; //pointer
    float xb=0;
    float v=0;

public: //public datas

    //members
    void input();
    double calc_varc();
    void calc_xb();
    double calc_stnd();
    void free_mem();
};

void stat::input()
{
    //function to input datas
    cout<<"Enter the number(N) of the element you want to enter: ";
    cin>>n;

    //dynamically allocating memory for array
    p=new float[n];

    //inputting the elements
    cout<<endl<<"ENTER THE ELEMENTS:--"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"ELEMENT "<<i+1<<": ";
        cin>>p[i];
    }

    //calculating the mean by calling out the function
    calc_xb();
}

double stat::calc_varc()
{
    //function to compute varaince
    for(int i=0;i<n;i++)
        v+=pow((p[i]-xb),2);
    
    v/=n;

    //returning the value
    return v;
}

double stat::calc_stnd()
{
    //returning the standard deviation value
    return sqrt(v);
}

void stat::calc_xb()
{
    //function to compute the mean
    for(int i=0;i<n;i++)
        xb+=p[i];

    xb/=n;
}

void stat::free_mem()
{
    //freeing up the dynamically allocated memory
    delete p;
}

int main()
{
    //main function

    //object
    class stat s;

    //calling out the function
    s.input();

    //outputting
    cout<<endl<<"Variance= "<<s.calc_varc()<<endl
        <<"Standard Deviation= "<<s.calc_stnd()<<endl;

    //calling out the function
    s.free_mem();

    return 0;
}