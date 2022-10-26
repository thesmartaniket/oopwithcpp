/*Write a program to read values of a, b and c and display the value of x, where x=a/b-c*/

#include <iostream> //libary files 

using namespace std; //namespace

int main()
{
    //main function

    //variables
    int x,a,b,c;

    //inputting
    cout<<"ENTER THE VARIABLES TO CALCULATE X=A/B-C\n"
        <<"ENTER A: ";
    cin>>a;
    cout<<"ENTER B: ";
    cin>>b;
    cout<<"ENTER C: ";
    cin>>c;

    //computing
    x=a/b-c;

    //outputting
    cout<<"THE VALUE OF X is "<<x;

    return 0;
}        