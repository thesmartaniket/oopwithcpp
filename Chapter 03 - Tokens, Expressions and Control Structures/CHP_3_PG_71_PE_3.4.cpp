/*Write a program to evaluate the following investment equation V=P(1+r)^n.*/

//header files
#include <iostream>
#include <math.h>
#include <iomanip>

//using namespace
using namespace std;

int main()
{
    //main function

    //variables
    int p=1000, n=1;
    float r=0.10,v;

    //computing
    while(n<11)
    {
        v=p*pow((1+r),n);
        cout<<setw(10)<<"Principal= "<<setw(5)<<p
            <<setw(10)<<" Rate= "<<fixed<<setprecision(2)<<setw(5)<<r
            <<setw(10)<<" Time= "<<setw(2)<<n
            <<setw(10)<<" Ammount= "<<fixed<<setprecision(2)<<setw(8)<<v<<endl;
        
        //incrementing
        p+=1000;
        r+=0.01;
        n++;
    }

    return 0;
}