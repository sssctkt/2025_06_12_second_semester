
#include <iostream>
using namespace std;
//function overloading-->c++ recognizes function overloading
//c++ can choose the correct function even if they have the same name 
//they choose the correct one based on the parameter
//always watch for the TYPE
void message(/*parameter*/);
void message(string aaaaaaaaa); //different parameter
void message(string name1, string name2); //number of parameter
void message(string name, int x); //different type of parameter
void message(int x, string name); //order of parameter
//int message(string name, string name2); //IT DOESN'T WORK FOR RETURN TYPE
int main()
{
    string name="Kwan", name2="John", name3="Rocky";
    int x=99, iq;
    message(name);
    
    return 0;
}
void message(){
    cout<<"hello!"<<endl;
}
void message(string aaaaaaaaa){
    cout<<aaaaaaaaa<<", you have a suspension today for fighting"<<endl;
}
void message(string name1, string name2){
    cout<<name1<<" and "<<name2<<" stop cheating!!"<<endl;
}
void message(string name, int x){
    cout<<name<<" your mark in english is "<<x<<" you probably cheated"<<endl;
}
void message(int x, string name){
    cout<<"your age is "<<x<<" "<<name<<" you are a bit too old to enter high school"<<endl;
}
/*
int message(string name, string name2){
    return 0;
}*/