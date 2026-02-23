
#include <iostream>
#include <string>
using namespace std;
void printnum(int number);
int main(){
    printnum(3);
}

void printnum(int number){
    if (number==1){
        cout<<number<<endl;
    }
    else{
        cout<<number<<endl;
        printnum(number-1);
    }
}