/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/
#include<iostream>
#include<cstdlib>//to use rand() and srand()
#include<ctime>//to use time(0)
using namespace std;
int main(){
    srand((time(0)));
    int random_number=rand()%100+1;
    
    int Guess=0;
    cout<<"Guess the number between 1 and 100 "<<endl;
    cout<<"enter the Guess: "<<endl;
    
    while(Guess!=random_number){
        cin>>Guess;
    if(Guess<random_number){
        cout<<"Too low!"<<endl;
    }
    else if(Guess>random_number)
{
    cout<<"Too high!"<<endl; 
}
else{
    cout<<"correct! you Guessed the number!";
}
    }
   return 0; 

}