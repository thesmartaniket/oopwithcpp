/*Write a function using reference variables as arguments to swap the values of a pair of integers.*/

#include <iostream> //header file

using namespace std; //namesapce

//function to swap variable's value
void swap(int &n1, int &n2)
{
    int tmp;
    tmp=n1;
    n1=n2;
    n2=tmp;
}

int main()
{
    //main function

    //variables
    int a,b;

    //inputting
    cout<<"Enter two numbers to swap their values: ";
    cin>>a>>b;

    //outputing
    cout<<"Before Swap:--"<<endl
        <<"A="<<a<<" B="<<b<<endl;

    swap(a,b);    

    cout<<"After Swap:--"<<endl
        <<"A="<<a<<" B="<<b<<endl;
    
    return 0;
}