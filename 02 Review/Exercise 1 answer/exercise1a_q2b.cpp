//Exercise 1A 2b

#include <iostream>

using namespace std;

int main(){
    int number, i, k;
    cout<<"Enter a number: ";
    cin>>number;
    /*
    for (i=1; i<=number; i++){
        for (k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }    */
    i=1;
    while(i<=number){
        k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}