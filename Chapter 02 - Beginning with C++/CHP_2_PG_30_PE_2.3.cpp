/*Write a program that inputs a character from keyboard and display its corresponding ASCII value on the screen.*/

#include <iostream> //ibary files

using namespace std; //namespace

int main()
{
    //main function

    //variables
    char c;
    int n=0;

    //inputting
    cout<<"ENTER A CHARCTER TO FIND ITS ASCII VALUE: ";
    cin>>c;

    //converting character to ASCII
    n+=c;

    //outputting
    cout<<"ASCII VALUE OF "<<c<<" IS "<<n;

    return 0;
}