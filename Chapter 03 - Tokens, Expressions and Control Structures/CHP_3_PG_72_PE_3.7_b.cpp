/*Write a program to evaluate the following function to 0.0001% accuracy.
b) SUM*/

//header files
#include <iostream>
#include <cmath>

//namespace
using namespace std;

//class
class sum
{
public: //pulblic data

    //variables
    double res=0;
    int n;

    //members
    void input();
    double calc();    
};

void sum::input()
{
    //function to input the data
    cout<<"Enter the number of terms to compute upto: ";
    cin>>n;
}

double sum::calc()
{
    //computing
    for(int i=1;i<=n;i++)
    {        
        res+=pow((1/float(i)),i);
        if(res<=0.0001)
            break;
    }

    return res;
}

int main()
{
    //main function

    //object
    class sum s;

    //calling out the class member
    s.input();

    //outputting
    cout<<"SUM = "<<s.calc()<<endl;

    return 0;
}