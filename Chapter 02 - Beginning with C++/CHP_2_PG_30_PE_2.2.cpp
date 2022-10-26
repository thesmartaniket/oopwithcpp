/*Write a program to read two numbers from keyboard and display the larger value on the screen.*/

#include <iostream> //libary files
using namespace std; //namespcae

int main()
{
    //main function

    //variables
    int a,b;

    //inputting & outputting
    cout<<"ENTER TWO NUMBERS TO KNOW THE LARGER VALUE"<<"\n"
        <<"ENTER NO. A: ";
    cin>>a;
    cout<<"ENTER NO. B: ";
    cin>>b;

    //decesion making
    if(a>b)
        cout<<"NO. A- "<<a<<" IS GREATER";
    else if(b>a)
        cout<<"NO. B- "<<b<<" IS GREATER";
    else if(a==b)
        cout<<"BOTH NO. A- "<<a<<" AND B- "<<b<<" IS EQUAL";    

    return 0;
}