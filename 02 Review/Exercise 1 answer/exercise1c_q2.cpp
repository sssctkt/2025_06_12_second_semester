//1C q2 
//try to see if you can spilt it into different files
#include <iostream>
using namespace std;
int getage();
int days(int age);
int main()
{
    int age, result;
    age=getage();
    result=days(age);
    cout<<"Your age in day is: "<<result;
    return 0;
}
int getage(){
    int answer;
    cout<<"Enter your age: ";
    cin>>answer;
    return answer;
}
int days(int age){
    return age*365;
}