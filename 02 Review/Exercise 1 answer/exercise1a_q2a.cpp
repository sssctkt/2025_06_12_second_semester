//Exercise 1A 2a

#include <iostream>

using namespace std;

int main(){
    int number1, number2;
    cout<<"Enter two number, separated by space: ";
    cin>>number1>>number2;
    if (number1>number2){
        cout<<number1<<" is bigger";
    }
    else{
        cout<<number2<<" is bigger";
    }


    return 0;
}