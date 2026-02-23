//1C q3 
//try to see if you can spilt it into different files
#include <iostream>
#include <iomanip> //input out manipluation
using namespace std;
bool isValidTime(int hour, int minute);
void displayTime(int hour, int minute); 

int main()
{
    int hour, minute;
    cout<<"Enter hour: ";
    cin>>hour;
    cout<<"Enter minute: ";
    cin>>minute;
    if (isValidTime(hour, minute)){
        displayTime(hour, minute);
        
    }
    else{
        cout<<"You input time in wrong format"<<endl;
    }
    return 0;
}
bool isValidTime(int hour, int minute){
    if ((hour>=0 && hour<=23)&& (minute>=0 && minute<=59)){
        return true;
    }
    else{
        return false;
    }
}
void displayTime(int hour, int minute){
    cout<<setw(2) <<setfill('0') << hour <<":"<<setw(2) <<setfill('0') <<minute<<endl;
}