/*Write a C++ program that will ask for a temperature in Fahreheit and display it in Celcius.*/

#include <iostream> //libary files

using namespace std; //namespace

int main()
{
    //main function

    //variables
    float c,f;

    //inputting
    cout<<"ENTER TEMPERATURE IN FAHRENHEIT TO OUT IT IN CELCIUS: ";
    cin>>f;

    //computing
    c=((f-32)*5)/9;

    //outputting
    cout<<"TEMPERATURE IN CELCIUS IS "<<c;

    return 0;
}