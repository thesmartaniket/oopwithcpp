/*Write a function that creates a vector of user-given size M using new operator.*/

#include <iostream> //header file

using namespace std; //namespace

//function to dynamically allocate vector memory
int* dyn_arr(int &m)
{
    int *vec;
    vec=new int[m];
    return vec;
}

int main()
{
    //main function

    //variables & pointers
    int m,*p;

    //inputting
    cout<<"Enter the size of vector: ";
    cin>>m;

    p=dyn_arr(m);

    //validating
    if(!p)
        cout<<"Failed!"<<endl;
    else cout<<"Vector Intialized"<<endl;

    //freeing the allocated space
    delete p;

    return 1;
}