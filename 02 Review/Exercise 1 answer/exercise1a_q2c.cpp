//Exercise 1A 2c

#include <iostream>

using namespace std;

int main(){
    int number; 
    cout<<"Enter a number: ";
    cin>>number;
    for (int i=number; i>1; i--){
        if (i*i<=number){
            cout<<i*i<<" is a perfect square"<<endl;
        }
    }
    return 0;
}