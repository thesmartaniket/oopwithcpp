/*An election is contested by five candidates. The candidates are numbered 1 to 5 and the voting is done by marking the candidate
number on the ballot paper. Write a program to read the ballots and count the votes cast for each candidate using an array
variable count. In case, a number read is outside the range of 1 to 5, the ballot should be considered as a 'spoilt ballot'
,and the program should also count the number of spoilt ballot.*/

//header file
#include <iostream>

//macro declaration
#define N 6 //number of perticipating candidates + Spoli ballot

//namspace
using namespace std;

//class
class vote
{
private: //private variables
    int can[N]={0,0,0,0,0,0};
    int spol_bal=0,n_bal,tmp_bal;

public: //public methods
    void input();
    void output();    
};

void vote::input()
{
    //function to input required datas

    //inputting max no. of ballot
    cout<<"Enter no. of max ballot submitted: ";
    cin>>n_bal;


    cout<<"Enter the result of each ballot accordingly---"<<endl;
    for(int i=1;i<=(N-1);i++)
    {
        //inputting the voted candidates
        cout<<"Ballot "<<i<<": ";
        cin>>tmp_bal;

        //decssion making
        switch(tmp_bal)
        {
            case 1:
                can[0]++;
                break;

            case 2:
                can[1]++;
                break;
            
            case 3:
                can[2]++;
                break;

            case 4:
                can[3]++;
                break;
            
            case 5:
                can[4]++;
                break;
            
            default:
                can[5]++;
                break;
        }
    }
}

void vote::output()
{
    //function to output computed data
    for(int i=0;i<(N-1);i++) //outputing no. of votes each candidates got
        cout<<"Candidate No. "<<(i+1)<<" , No. of Votes: "<<can[i]<<endl;
    //outputting no. of Spoilt Ballot
    cout<<"No. of Spoilt Ballot: "<<can[5]<<endl; 
}

int main()
{
    //main function

    //object
    vote v;

    //calling out the functions
    v.input();
    v.output();

    return 0;
}