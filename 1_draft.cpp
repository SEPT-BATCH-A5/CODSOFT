#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int user_guess = 0 , num ;
    srand((unsigned int )time(NULL));
    num = (rand()%100) + 1;
    cout<<"\n*********Welcome to Number Guessing Game*********\n\n\n";

    do
    {
        cout<<"Guess a number between 1 and 100"<<endl<<endl;
        cin>>user_guess;

        if(user_guess < num)
            cout<<"The Guess Is Too Low...."<<endl;
        else if(user_guess > num)
            cout<<"The Guess Is Too High...."<<endl;
        else
            cout<<"*********Congratulations You Have Won The Game*********"<<endl;
    }
    while(num!= user_guess);
    return 0;
}
