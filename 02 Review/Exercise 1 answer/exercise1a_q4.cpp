//Exercise 1A q4

#include <iostream>

using namespace std;

int main(){
    int number;
    bool prime=true;
    cout<<"Enter a number: ";
    cin>>number; 
    if (number==2){
        cout<<number<<" is a prime number"<<endl;
    }
    else{
        for (int i=2; i<number; i++){
            if (number%i==0){
                prime=false;
                cout<<number<<" is "<<i<<"x"<<number/i<<endl;
                break;
            }
        }
        if (prime==true){
            cout<<number<<" is a prime number"<<endl;
        }
    }
    return 0;
}