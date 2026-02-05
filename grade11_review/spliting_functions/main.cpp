/* you need to know how to split the function*/
// main file, implementation file, header file 
// you also need to know what does it by returning (or not returning)
// a value
#include <iostream>
#include "functions.h"
using namespace std;
int main()
{
    message(); //calling the function
    float math, sci, eng, bio, physics, chem;
    float top_six_average;
    cout<<"Enter grade for math, sci, eng, bio, physics, chem: ";
    cin>>math>>sci>>eng>>bio>>physics>>chem;
    top_six_average=calc(math, sci, eng, bio, physics, chem);
    cout<<"Your top six average is: "<<top_six_average<<endl;
    if (pass(top_six_average)==true){
        cout<<"You are into McMaster Health Sci";
    }
    return 0;
}
