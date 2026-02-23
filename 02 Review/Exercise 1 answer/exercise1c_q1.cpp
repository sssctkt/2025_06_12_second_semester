//1C q1 typo-->should be 2 user defined function
//try to see if you can spilt it into different files
#include <iostream>
using namespace std;
void twice();
void second();
int main()
{
    twice();
    twice();
    second();
    second();

    return 0;
}
void twice(){
    cout<<"Twinkle, twinkle, little star"<<endl;
}
void second(){
    cout<<"How I wonder what you are"<<endl;
}