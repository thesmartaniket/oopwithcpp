/*Write a program to evaluate the following function to 0.0001% accuracy.
c) Cos(x)*/

//macro declaration
#define PI 3.142

//header files
#include <iostream>
#include <cmath>

//namespace
using namespace std;

//class
class cosf
{
private: //private datas

    //variables
    int n;
    double x;

public: //public datas

    //variables
    int tmp_x;

    //members
    void input();
    double calc();
    int fact(int f);
};

void cosf::input()
{
    //function to input the datas
    cout<<"Enter x in degrees for Cos: ";
    cin>>tmp_x;
    x=PI*tmp_x/180; //converting the degree to rad
    cout<<"Enter number of terms to compute: ";
    cin>>n;
}

int cosf::fact(int f)
{
    //function to calculate factorial

    //variables
    int tmp_f=f;

    //computing
    for(int i=1;i<f;i++)
        tmp_f*=i;

    //returning the value
    return tmp_f;
}
 
double cosf::calc()
{
    //function to compute

    //variables
    double sum=1;
    int s=-1;

    //computing
    for(int i=2;i<=n;i+=2)
    {
        sum+=(s*(pow(x,i)/fact(i)));

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

    //onject
    class cosf cos;

    //calling out the function
    cos.input();

    //outputting
    cout<<"Cos("<<cos.tmp_x<<") = "
        <<cos.calc()<<endl;

    return 0;
}