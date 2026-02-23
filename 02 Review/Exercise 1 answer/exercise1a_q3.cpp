//Exercise 1A 2c

#include <iostream>
#include <ctime> //for time
#include <cstdlib> //for rand()
using namespace std;

int main(){
    srand(time(NULL)); //start random number
    int number=rand()%100+1; //1-100
    int guess, count=0; //needs to initialize count
    while(true){
        cout<<"Guess a number: ";
        cin>>guess;
        if (guess>number){
            count++;
            cout<<"Too big"<<endl;
        }
        else if (guess<number){
            count++;
            cout<<"Too small"<<endl;
        }
        else{
            count++;
            cout<<"You got it!! It takes you "<<count<<" attempt(s)";
            break;
        }
    }
    return 0;
}