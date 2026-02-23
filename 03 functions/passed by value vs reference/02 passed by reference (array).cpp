
#include <iostream>
using namespace std;
//what is the difference when I hava a regular variable vs an array when
//passed into the function
void doesitchange(int x[]);
int main()
{
    int y[]={1, 2, 3};
    doesitchange(y); //passed the array into the function
    //regular variable-->int, float, string, etc
    //passed by reference
    cout<<"in main: ";
    cout<<y[0]<<endl;
    cout<<&y[0]<<endl; //location of y[0] (main)
    //for array, even if they have different name 
    //they are actually the same thing
    return 0;
}
void doesitchange(int x[]){
    x[0]=99;
    cout<<"inside the function: ";
    cout<<x[0]<<endl;
    cout<<&x[0]<<endl; //location of x[0] (function)
}