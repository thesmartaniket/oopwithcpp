/*Redo Exercise 2.5 using a class temp and member function*/

#include <iostream> //libary files

using namespace std; //namespace

class temp //class declaration
{
    //variables[Private]
    float c,f;

public:
    //member functions
    void get_temp();
    float convert_temp();    
};

void temp::get_temp()
{
    //function to get temp

    //inputting
    cout<<"ENTER TEMPERATURE IN FAHRENHEIT TO OUT IT IN CELCIUS: ";
    cin>>f;
}

float temp::convert_temp()
{   //function to compute
    c=((f-32)*5)/9;
    return c;   //return the celcius value
}

int main()
{
    //main function

    //object
    temp t;

    //calling out public member functions
    t.get_temp();
    float c=t.convert_temp(); //receiving the celcius value
    
    //outputting
    cout<<"TEMPERATURE IN CELCIUS IS "<<c;

    return 0;
}