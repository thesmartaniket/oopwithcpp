/*Write a program to evaluate the following function to 0.0001% accuracy.
a) Sin(x)*/

//macro declarations
#define PI 3.142

//header files
#include <iostream>
#include <cmath>

//namespcae
using namespace std;

//class
class sinf
{
private: //private data
    //variables
    double x;
    int n;

public: //public data & members
    //variables
    float tmp_x;    

    //members
    void input();
    int fact(int f);
    double calc();
};

int sinf::fact(int f)
{
    //function to calculate factorial

    //duplicate variable
    int tmp=f;

    //computting
    for(int i=1;i<f;i++)
    {
        tmp*=i;
    }

    //returning the value
    return tmp;
}

void sinf::input()
{
    //function to input the datas
    cout<<"Enter x in degrees Sin: ";
    cin>>tmp_x;
    x=PI*tmp_x/180; //converting the degree to rad
    cout<<"Enter number of terms to compute: ";
    cin>>n;
}

double sinf::calc()
{
    //function to compute

    //variables
    double sum=0;
    int s=1; //sign
    
    //computting
    for(int i=1; i<=n; i+=2)
    {
        sum+=(s*((pow(x,i))/fact(i)));

        if(sum<=0.0001) //for the accuracy
            break;

        s*=-1; //changing the sign
    }

    //returning the value
    return sum;
}

int main()
{
    //main function

    //object
    class sinf sin;

    //calling out the function
    sin.input();

    //outputting
    cout<<"Sin("<<sin.tmp_x<<")"
        <<" = "<<sin.calc()<<endl;

    return 0;
}