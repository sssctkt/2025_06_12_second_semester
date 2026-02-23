
#include <iostream>
using namespace std;
//what is the difference when I hava a regular variable vs an array when
//passed into the function
void doesitchange(int x);
int main()
{
    int x=5;
    doesitchange(x); //passed the regular variable into the function
    //regular variable-->int, float, string, etc
    //passed by value
    cout<<"in main: ";
    cout<<x<<endl;
    cout<<&x<<endl; //location of x (main)
    //for regular variable, even if they have the same name 
    //they are different
    return 0;
}
void doesitchange(int x){
    x=99;
    cout<<"inside the function: ";
    cout<<x<<endl;
    cout<<&x<<endl; //location of x (function)
}