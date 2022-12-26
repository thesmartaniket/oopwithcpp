/*Write a program to print the following output using for loop
1
22
333
4444
55555
.......*/

#include <iostream> //header file

using namespace std; //namspace

int main()
{
    //main function

    //variable
    int r;

    //inputting
    cout<<"Enter number of rows to print the pattern upto: ";
    cin>>r;

    //outputting
    for(int i=1;i<=r;i++)
    {    
        for(int j=1;j<=i;j++)
            cout<<i;

        cout<<endl;    
    }

    return 0;
}